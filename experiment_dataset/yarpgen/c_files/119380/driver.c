#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = 2126361948;
int var_6 = 127837726;
unsigned int var_9 = 69488690U;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4160259927U;
unsigned int var_15 = 1476119100U;
signed char var_16 = (signed char)34;
int var_17 = -1958683490;
unsigned int var_18 = 3308177286U;
unsigned char var_19 = (unsigned char)56;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)16;
unsigned int var_22 = 2395028792U;
void init() {
}

void checksum() {
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
