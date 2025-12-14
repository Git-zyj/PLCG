#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2972932568U;
unsigned char var_3 = (unsigned char)222;
int var_7 = -1797292144;
int var_8 = 833885194;
unsigned long long int var_10 = 6210695506618952947ULL;
unsigned short var_11 = (unsigned short)34117;
unsigned long long int var_13 = 5482236735330938638ULL;
unsigned char var_14 = (unsigned char)55;
int zero = 0;
int var_17 = 659853871;
unsigned int var_18 = 3512455482U;
unsigned char var_19 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
