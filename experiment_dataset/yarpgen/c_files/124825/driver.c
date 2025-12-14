#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_6 = (short)-14929;
int var_7 = -1910317375;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 440930904685813364ULL;
_Bool var_16 = (_Bool)0;
int var_17 = 1566342809;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
