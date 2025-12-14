#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_5 = (short)4907;
signed char var_7 = (signed char)-95;
int var_8 = -1151913603;
int var_17 = -926580641;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6896542802238993067LL;
void init() {
}

void checksum() {
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
