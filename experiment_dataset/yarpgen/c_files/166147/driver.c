#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 834671264;
short var_6 = (short)3123;
int var_7 = 651930943;
unsigned short var_10 = (unsigned short)21911;
_Bool var_14 = (_Bool)1;
int var_15 = -1962869949;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 1570667658;
int var_20 = 1073418950;
unsigned long long int var_21 = 4844300070129545186ULL;
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
