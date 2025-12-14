#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2667;
short var_1 = (short)16395;
unsigned int var_2 = 3797575427U;
unsigned char var_3 = (unsigned char)161;
unsigned short var_8 = (unsigned short)7810;
int var_10 = -2061095705;
int var_12 = -979900961;
long long int var_13 = -5852688049817204030LL;
long long int var_15 = -1260324820001424552LL;
unsigned char var_18 = (unsigned char)188;
int zero = 0;
short var_19 = (short)10964;
long long int var_20 = 3627396400675745811LL;
unsigned short var_21 = (unsigned short)47531;
unsigned long long int var_22 = 15501279642609339884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
