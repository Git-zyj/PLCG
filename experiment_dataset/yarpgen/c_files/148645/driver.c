#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -414775823;
signed char var_4 = (signed char)-87;
short var_6 = (short)-30471;
unsigned long long int var_8 = 3338717997671993974ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-29311;
long long int var_15 = -5721592413763034821LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
