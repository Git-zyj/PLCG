#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4369418620870672040ULL;
unsigned int var_3 = 3203775376U;
unsigned char var_6 = (unsigned char)127;
int zero = 0;
int var_12 = 2084536065;
long long int var_13 = -2457609366125908402LL;
void init() {
}

void checksum() {
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
