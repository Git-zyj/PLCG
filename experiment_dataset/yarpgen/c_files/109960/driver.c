#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5263;
unsigned char var_1 = (unsigned char)115;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)36198;
_Bool var_7 = (_Bool)1;
short var_13 = (short)-11847;
unsigned long long int var_14 = 5445589903051543229ULL;
int zero = 0;
long long int var_17 = -8257248093089439961LL;
unsigned char var_18 = (unsigned char)157;
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
