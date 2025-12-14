#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1431019544;
short var_2 = (short)2062;
short var_3 = (short)-749;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)12;
unsigned long long int var_10 = 4562936158728782240ULL;
unsigned char var_13 = (unsigned char)31;
int zero = 0;
unsigned char var_15 = (unsigned char)3;
unsigned char var_16 = (unsigned char)207;
unsigned long long int var_17 = 12400048259228286706ULL;
short var_18 = (short)-30185;
unsigned char var_19 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
