#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16758;
long long int var_3 = -4436194032582378432LL;
signed char var_5 = (signed char)-68;
unsigned char var_6 = (unsigned char)248;
long long int var_8 = -8567432518246781334LL;
long long int var_9 = -539191550563227891LL;
long long int var_10 = 7286605221048906997LL;
unsigned long long int var_11 = 18056711221364555217ULL;
int var_12 = -258399776;
long long int var_13 = -8040074231090970304LL;
short var_14 = (short)-18739;
int var_15 = 361062051;
int zero = 0;
long long int var_16 = -4229040090998037024LL;
unsigned int var_17 = 979635770U;
void init() {
}

void checksum() {
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
