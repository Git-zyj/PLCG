#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 387777962953202400ULL;
short var_9 = (short)8876;
int var_10 = -250478765;
_Bool var_11 = (_Bool)0;
unsigned char var_17 = (unsigned char)77;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-3582;
short var_21 = (short)32612;
int var_22 = 1187982059;
unsigned long long int var_23 = 4383862349323429505ULL;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
