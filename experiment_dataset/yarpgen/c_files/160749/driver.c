#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10622;
short var_7 = (short)20153;
unsigned int var_10 = 78291559U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 5542474465557229011ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4097332674U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
