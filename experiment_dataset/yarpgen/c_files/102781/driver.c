#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1497865969;
unsigned char var_4 = (unsigned char)220;
unsigned short var_6 = (unsigned short)59828;
int var_7 = -2112390341;
short var_8 = (short)-23507;
unsigned char var_10 = (unsigned char)63;
_Bool var_17 = (_Bool)0;
unsigned int var_19 = 3258965578U;
int zero = 0;
unsigned int var_20 = 534132615U;
unsigned long long int var_21 = 2481495579679838786ULL;
signed char var_22 = (signed char)68;
unsigned char var_23 = (unsigned char)113;
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
