#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
int var_1 = -1585735716;
unsigned short var_3 = (unsigned short)34359;
short var_7 = (short)-31742;
unsigned int var_11 = 2278574978U;
short var_12 = (short)24095;
int zero = 0;
unsigned long long int var_13 = 9252383015676712087ULL;
_Bool var_14 = (_Bool)1;
int var_15 = -1307378066;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
