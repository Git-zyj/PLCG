#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 48763486;
unsigned char var_8 = (unsigned char)244;
unsigned long long int var_12 = 8059721402866816952ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)211;
int zero = 0;
short var_17 = (short)-27069;
unsigned int var_18 = 2763613487U;
int var_19 = -413554949;
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
