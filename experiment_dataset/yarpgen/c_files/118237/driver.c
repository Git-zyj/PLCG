#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29766;
unsigned int var_5 = 3496082534U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1689976216U;
unsigned short var_11 = (unsigned short)61480;
short var_12 = (short)-4792;
int var_13 = 1185127423;
int zero = 0;
int var_17 = -1623661329;
_Bool var_18 = (_Bool)1;
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
