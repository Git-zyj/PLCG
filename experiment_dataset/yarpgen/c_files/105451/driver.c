#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
signed char var_1 = (signed char)8;
unsigned short var_3 = (unsigned short)41651;
int var_4 = 862833854;
long long int var_7 = 4746023142557735060LL;
long long int var_8 = -8375277114045912162LL;
int var_11 = -1169355405;
unsigned long long int var_12 = 11111034186793898823ULL;
int var_13 = -1144825557;
signed char var_14 = (signed char)88;
int zero = 0;
short var_15 = (short)-7912;
unsigned int var_16 = 1927405282U;
_Bool var_17 = (_Bool)1;
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
