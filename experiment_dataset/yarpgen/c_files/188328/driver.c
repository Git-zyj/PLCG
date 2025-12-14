#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-31;
short var_4 = (short)2725;
unsigned char var_5 = (unsigned char)9;
unsigned char var_7 = (unsigned char)197;
unsigned short var_8 = (unsigned short)10433;
int var_9 = -846668444;
unsigned short var_15 = (unsigned short)23975;
int zero = 0;
unsigned char var_16 = (unsigned char)47;
unsigned long long int var_17 = 16807713308078471118ULL;
signed char var_18 = (signed char)51;
void init() {
}

void checksum() {
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
