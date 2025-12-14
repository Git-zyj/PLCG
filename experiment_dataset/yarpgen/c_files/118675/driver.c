#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)166;
short var_5 = (short)-2831;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 3516437629U;
unsigned short var_16 = (unsigned short)26296;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-100;
unsigned int var_20 = 1762417316U;
void init() {
}

void checksum() {
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
