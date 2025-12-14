#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1312496281;
signed char var_1 = (signed char)-108;
long long int var_3 = 1572723287284613698LL;
_Bool var_4 = (_Bool)1;
int var_5 = -84633812;
_Bool var_6 = (_Bool)0;
int var_9 = 1622881415;
int zero = 0;
signed char var_11 = (signed char)15;
long long int var_12 = -4082752105388460372LL;
short var_13 = (short)-19348;
unsigned int var_14 = 2161535970U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
