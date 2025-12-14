#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 153940319;
int var_1 = 476956720;
unsigned char var_3 = (unsigned char)27;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)98;
unsigned long long int var_7 = 13666727004542106269ULL;
int zero = 0;
long long int var_10 = -9127567825157346536LL;
signed char var_11 = (signed char)3;
short var_12 = (short)-5321;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
