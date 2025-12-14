#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)167;
unsigned short var_6 = (unsigned short)24331;
unsigned char var_10 = (unsigned char)209;
int zero = 0;
unsigned long long int var_12 = 7874876770966416439ULL;
unsigned long long int var_13 = 7247940534640134751ULL;
unsigned char var_14 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
