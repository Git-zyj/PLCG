#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 110378648U;
unsigned char var_2 = (unsigned char)144;
unsigned long long int var_3 = 12151257545367567876ULL;
unsigned short var_4 = (unsigned short)57675;
int zero = 0;
unsigned int var_10 = 2318519990U;
unsigned char var_11 = (unsigned char)25;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3841547945326996069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
