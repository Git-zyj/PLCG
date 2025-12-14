#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1238084971193604010ULL;
short var_2 = (short)-22866;
unsigned long long int var_3 = 14525085005207472094ULL;
unsigned long long int var_4 = 741176959981496197ULL;
int var_6 = 1178207054;
signed char var_7 = (signed char)54;
short var_10 = (short)4513;
_Bool var_11 = (_Bool)0;
int var_12 = -1798204906;
int zero = 0;
unsigned int var_13 = 3942797546U;
signed char var_14 = (signed char)11;
unsigned short var_15 = (unsigned short)25689;
unsigned short var_16 = (unsigned short)58590;
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
