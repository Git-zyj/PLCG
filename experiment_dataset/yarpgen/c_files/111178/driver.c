#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10456;
_Bool var_4 = (_Bool)1;
short var_6 = (short)3413;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)56331;
int zero = 0;
unsigned int var_12 = 513270769U;
unsigned short var_13 = (unsigned short)26036;
unsigned int var_14 = 2886098181U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
