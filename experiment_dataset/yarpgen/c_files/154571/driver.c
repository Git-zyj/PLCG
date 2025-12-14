#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16133;
short var_6 = (short)15519;
int var_8 = 481517841;
unsigned long long int var_9 = 1824236703976163240ULL;
signed char var_12 = (signed char)-95;
long long int var_13 = -8488051532564909566LL;
int zero = 0;
unsigned short var_15 = (unsigned short)10541;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
