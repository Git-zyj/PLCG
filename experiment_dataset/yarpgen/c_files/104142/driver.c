#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)14;
_Bool var_5 = (_Bool)0;
short var_14 = (short)-28787;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-68;
short var_17 = (short)-4677;
void init() {
}

void checksum() {
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
