#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 817781818U;
short var_2 = (short)-4812;
short var_3 = (short)9213;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-31130;
long long int var_8 = 3708687076220657242LL;
int zero = 0;
short var_10 = (short)3943;
signed char var_11 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
