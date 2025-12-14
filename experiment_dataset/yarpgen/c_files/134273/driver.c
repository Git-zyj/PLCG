#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4211792478U;
long long int var_5 = 8925538317482124589LL;
unsigned short var_6 = (unsigned short)20920;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)104;
short var_11 = (short)-6672;
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
