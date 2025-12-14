#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2371300783U;
unsigned int var_6 = 545188049U;
unsigned long long int var_8 = 15149643928099259665ULL;
unsigned char var_9 = (unsigned char)154;
unsigned short var_10 = (unsigned short)17543;
unsigned char var_13 = (unsigned char)25;
int zero = 0;
int var_14 = 657504651;
signed char var_15 = (signed char)28;
unsigned char var_16 = (unsigned char)125;
unsigned char var_17 = (unsigned char)160;
int var_18 = -743576281;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
