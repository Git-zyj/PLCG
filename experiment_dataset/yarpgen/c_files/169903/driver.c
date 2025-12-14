#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3309806906633849950LL;
unsigned short var_2 = (unsigned short)16358;
unsigned int var_3 = 916736394U;
unsigned char var_4 = (unsigned char)115;
unsigned int var_5 = 507859112U;
int var_7 = -1701659206;
int var_11 = -333600473;
unsigned int var_12 = 2082795398U;
short var_13 = (short)-32169;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
