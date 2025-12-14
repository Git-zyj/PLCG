#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14105966477108185313ULL;
unsigned short var_4 = (unsigned short)52076;
unsigned long long int var_5 = 11257611903698008580ULL;
unsigned char var_6 = (unsigned char)248;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 4106466030U;
unsigned char var_16 = (unsigned char)144;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
