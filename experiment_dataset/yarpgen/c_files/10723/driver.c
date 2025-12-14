#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17453345375232512586ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4734935747887906116ULL;
short var_14 = (short)16924;
int zero = 0;
int var_15 = -745299608;
signed char var_16 = (signed char)32;
signed char var_17 = (signed char)23;
unsigned long long int var_18 = 7976058024577514654ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
