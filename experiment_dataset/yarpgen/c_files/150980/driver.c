#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 10432491663609211898ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-2988;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -814788371;
long long int var_17 = -8389634268409785404LL;
short var_18 = (short)30902;
int var_19 = -96265941;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
