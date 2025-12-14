#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6169136210723664029ULL;
unsigned short var_2 = (unsigned short)50865;
unsigned long long int var_3 = 17541224440901311583ULL;
unsigned char var_4 = (unsigned char)9;
unsigned long long int var_8 = 8524385131985947954ULL;
int zero = 0;
int var_11 = -746069870;
unsigned long long int var_12 = 8308864511099103075ULL;
unsigned long long int var_13 = 14397903918799290824ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
