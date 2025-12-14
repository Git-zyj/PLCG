#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4591069478647577936ULL;
unsigned int var_2 = 1802488730U;
unsigned short var_3 = (unsigned short)60864;
unsigned char var_4 = (unsigned char)181;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)13885;
long long int var_8 = -5770607630644465138LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 2179802468713574361LL;
unsigned short var_11 = (unsigned short)26223;
int zero = 0;
unsigned long long int var_12 = 13448851580118902773ULL;
unsigned int var_13 = 2035011096U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2700621308829638806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
