#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1185642930U;
unsigned long long int var_1 = 9117933474866637019ULL;
int var_2 = -1807563924;
unsigned char var_3 = (unsigned char)205;
unsigned int var_5 = 2894352039U;
unsigned long long int var_10 = 1852858259222316543ULL;
unsigned char var_12 = (unsigned char)100;
short var_16 = (short)-14998;
int zero = 0;
unsigned int var_18 = 2720534529U;
unsigned int var_19 = 1521673132U;
unsigned short var_20 = (unsigned short)11013;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
