#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12909;
int var_3 = 1290168696;
unsigned long long int var_6 = 1433917082864545785ULL;
unsigned int var_7 = 2436245038U;
unsigned short var_9 = (unsigned short)58745;
unsigned int var_10 = 654664846U;
unsigned short var_12 = (unsigned short)39299;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)159;
unsigned char var_21 = (unsigned char)187;
void init() {
}

void checksum() {
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
