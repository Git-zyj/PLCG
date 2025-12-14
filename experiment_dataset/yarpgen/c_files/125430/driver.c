#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6549677523875049460ULL;
unsigned long long int var_2 = 11069814664097261959ULL;
unsigned short var_7 = (unsigned short)22002;
int var_10 = -1052481300;
int zero = 0;
unsigned char var_15 = (unsigned char)63;
unsigned int var_16 = 3101033761U;
signed char var_17 = (signed char)102;
unsigned int var_18 = 1638195071U;
unsigned short var_19 = (unsigned short)26131;
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
