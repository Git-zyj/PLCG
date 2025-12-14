#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10933468373489171633ULL;
unsigned char var_3 = (unsigned char)132;
signed char var_9 = (signed char)124;
short var_11 = (short)10824;
short var_12 = (short)-8653;
int var_13 = -1744238133;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)113;
long long int var_17 = 1144694535643472078LL;
int zero = 0;
short var_19 = (short)32499;
unsigned long long int var_20 = 10942085019750746361ULL;
void init() {
}

void checksum() {
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
