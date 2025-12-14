#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44542;
_Bool var_8 = (_Bool)1;
unsigned int var_16 = 4256509939U;
int zero = 0;
unsigned char var_18 = (unsigned char)29;
unsigned int var_19 = 218793369U;
unsigned int var_20 = 2953796054U;
signed char var_21 = (signed char)-107;
unsigned short var_22 = (unsigned short)33157;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
