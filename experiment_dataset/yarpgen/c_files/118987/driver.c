#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6103405703473633018LL;
unsigned long long int var_2 = 15564391811034275501ULL;
int var_3 = -1930535898;
unsigned long long int var_5 = 2002461110410670764ULL;
unsigned int var_7 = 116335924U;
signed char var_8 = (signed char)-69;
signed char var_9 = (signed char)66;
short var_11 = (short)29453;
short var_12 = (short)18913;
int zero = 0;
int var_13 = -1650372058;
unsigned int var_14 = 2412296604U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4721652087511777269ULL;
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
