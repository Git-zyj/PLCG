#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -513928467843109541LL;
unsigned short var_3 = (unsigned short)47785;
signed char var_6 = (signed char)53;
_Bool var_9 = (_Bool)1;
int var_12 = -813265150;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)59;
unsigned char var_17 = (unsigned char)201;
_Bool var_18 = (_Bool)1;
short var_19 = (short)6026;
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
