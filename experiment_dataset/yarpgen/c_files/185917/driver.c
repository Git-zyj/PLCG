#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1622928005638364452LL;
signed char var_8 = (signed char)62;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)111;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-94;
long long int var_21 = -1948166293067898425LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
