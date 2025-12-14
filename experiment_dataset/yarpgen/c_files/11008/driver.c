#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned int var_2 = 4105250429U;
unsigned int var_4 = 1814010345U;
unsigned long long int var_6 = 5010140899291889940ULL;
int zero = 0;
signed char var_10 = (signed char)22;
unsigned short var_11 = (unsigned short)46458;
short var_12 = (short)-5504;
int var_13 = 1382505760;
unsigned char var_14 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
