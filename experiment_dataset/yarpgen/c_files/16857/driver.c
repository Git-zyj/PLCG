#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2367593970U;
unsigned short var_9 = (unsigned short)21408;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)22;
unsigned short var_15 = (unsigned short)59793;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 854332207U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 208279284U;
unsigned long long int var_20 = 11442422397993159896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
