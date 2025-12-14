#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 2815060457310451036LL;
long long int var_3 = 561099538100285551LL;
short var_5 = (short)-29455;
int var_6 = 1668693657;
unsigned int var_8 = 621778240U;
short var_15 = (short)-15888;
int zero = 0;
unsigned int var_20 = 628451157U;
long long int var_21 = 2625245209359616278LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
