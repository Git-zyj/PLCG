#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)204;
short var_3 = (short)20784;
short var_4 = (short)7095;
short var_7 = (short)8083;
short var_8 = (short)-9306;
unsigned long long int var_13 = 5362308276445882757ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5064877311301563461LL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)35392;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
