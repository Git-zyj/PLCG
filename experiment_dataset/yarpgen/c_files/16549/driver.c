#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8461096473368435712LL;
long long int var_3 = -3211039993673507848LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 7753416598947444873ULL;
int var_9 = -2009172537;
long long int var_10 = 8708587094760545698LL;
long long int var_12 = -3719954574344112519LL;
unsigned char var_14 = (unsigned char)225;
short var_16 = (short)-27969;
int zero = 0;
int var_18 = 463563712;
unsigned char var_19 = (unsigned char)211;
void init() {
}

void checksum() {
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
