#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 162595542;
unsigned short var_5 = (unsigned short)58987;
_Bool var_7 = (_Bool)1;
short var_14 = (short)8606;
short var_16 = (short)-24451;
unsigned long long int var_17 = 7371493179586449221ULL;
int var_18 = 1871247547;
int zero = 0;
int var_20 = -1087053356;
int var_21 = -1472638959;
unsigned long long int var_22 = 17887908726990962376ULL;
unsigned long long int var_23 = 16270499613345156132ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
