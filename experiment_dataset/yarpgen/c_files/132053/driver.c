#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_5 = 2479378350859416368LL;
short var_6 = (short)-15231;
unsigned int var_12 = 3331102668U;
int zero = 0;
unsigned int var_14 = 2444478753U;
short var_15 = (short)17923;
short var_16 = (short)-4391;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
