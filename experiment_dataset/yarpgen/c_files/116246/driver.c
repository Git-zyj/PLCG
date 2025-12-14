#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)87;
unsigned short var_7 = (unsigned short)18421;
unsigned char var_8 = (unsigned char)45;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2486782540U;
int zero = 0;
signed char var_13 = (signed char)95;
long long int var_14 = -2668642750785870884LL;
short var_15 = (short)-26728;
unsigned int var_16 = 2472068289U;
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
