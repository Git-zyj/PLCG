#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)119;
_Bool var_15 = (_Bool)1;
short var_17 = (short)9775;
int zero = 0;
short var_18 = (short)-15983;
unsigned long long int var_19 = 14265474637656846710ULL;
signed char var_20 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
