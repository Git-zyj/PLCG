#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65311;
int var_3 = -1767612892;
unsigned int var_5 = 2218552245U;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3618331588U;
short var_12 = (short)-11171;
unsigned int var_14 = 2436991293U;
int zero = 0;
long long int var_15 = 7025334341592878541LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-24107;
short var_18 = (short)-3887;
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
