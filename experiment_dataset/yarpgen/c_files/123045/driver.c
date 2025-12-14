#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
int var_2 = -190390214;
unsigned short var_3 = (unsigned short)47386;
unsigned short var_10 = (unsigned short)53600;
unsigned int var_11 = 883152696U;
signed char var_12 = (signed char)119;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 1280880102;
unsigned int var_17 = 327994037U;
unsigned char var_18 = (unsigned char)117;
signed char var_19 = (signed char)123;
short var_20 = (short)-19066;
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
