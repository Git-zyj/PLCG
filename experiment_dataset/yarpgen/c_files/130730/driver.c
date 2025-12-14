#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2602321729U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_9 = 17038791882536546845ULL;
signed char var_13 = (signed char)70;
long long int var_14 = 2605891948456610053LL;
unsigned long long int var_16 = 16185058318757997453ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)200;
short var_19 = (short)1938;
signed char var_20 = (signed char)-39;
short var_21 = (short)-23292;
short var_22 = (short)29357;
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
