#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)57;
unsigned char var_3 = (unsigned char)229;
long long int var_4 = -3285927680035543294LL;
signed char var_5 = (signed char)-110;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)54;
unsigned short var_13 = (unsigned short)16353;
short var_15 = (short)-14994;
unsigned int var_16 = 3213918902U;
int zero = 0;
unsigned int var_17 = 901283551U;
signed char var_18 = (signed char)-6;
void init() {
}

void checksum() {
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
