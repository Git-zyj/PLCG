#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)52;
unsigned long long int var_6 = 5617843740285061559ULL;
unsigned short var_10 = (unsigned short)44290;
signed char var_13 = (signed char)115;
unsigned int var_14 = 4280777033U;
unsigned long long int var_15 = 2438456738693841047ULL;
int zero = 0;
signed char var_16 = (signed char)77;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 297733082U;
unsigned char var_19 = (unsigned char)227;
void init() {
}

void checksum() {
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
