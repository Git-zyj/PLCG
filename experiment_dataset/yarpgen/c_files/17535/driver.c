#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)27895;
unsigned long long int var_10 = 17944327451954226573ULL;
unsigned int var_11 = 3828741950U;
unsigned short var_13 = (unsigned short)56866;
int var_14 = 1001105648;
unsigned int var_15 = 86804004U;
unsigned int var_16 = 156410314U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1217099453U;
void init() {
}

void checksum() {
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
