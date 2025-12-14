#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 362631815U;
unsigned char var_3 = (unsigned char)158;
unsigned short var_14 = (unsigned short)59423;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)-10397;
unsigned char var_18 = (unsigned char)52;
unsigned short var_19 = (unsigned short)61109;
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
