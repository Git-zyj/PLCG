#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)76;
unsigned int var_14 = 3687728182U;
int zero = 0;
unsigned short var_15 = (unsigned short)35879;
int var_16 = 855947310;
long long int var_17 = -2022808100892455909LL;
unsigned short var_18 = (unsigned short)23868;
int var_19 = 1190070398;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
