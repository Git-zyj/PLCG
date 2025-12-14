#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -8862643669061988488LL;
signed char var_2 = (signed char)-78;
short var_4 = (short)-6441;
short var_6 = (short)19345;
_Bool var_8 = (_Bool)1;
int var_11 = 1299842846;
int zero = 0;
long long int var_16 = 605550526398774093LL;
short var_17 = (short)29817;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
