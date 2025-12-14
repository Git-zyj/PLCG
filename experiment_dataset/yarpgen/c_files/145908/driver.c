#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -3551417829315727283LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1579285015;
unsigned short var_18 = (unsigned short)64921;
short var_19 = (short)-16397;
void init() {
}

void checksum() {
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
