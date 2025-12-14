#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4189480143623296059LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)154;
unsigned int var_10 = 365967614U;
unsigned int var_12 = 1176050824U;
short var_15 = (short)-7912;
int zero = 0;
unsigned short var_16 = (unsigned short)13174;
int var_17 = -1617591540;
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
