#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2076269266;
_Bool var_3 = (_Bool)1;
int var_5 = -499899727;
short var_8 = (short)-1206;
unsigned int var_10 = 3660018880U;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)4;
long long int var_17 = -4786592367928097201LL;
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
