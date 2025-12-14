#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16279;
unsigned short var_1 = (unsigned short)39377;
unsigned long long int var_3 = 9259891350745397825ULL;
short var_6 = (short)-15877;
int var_10 = 501653645;
unsigned char var_11 = (unsigned char)163;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)29219;
int zero = 0;
unsigned char var_14 = (unsigned char)230;
unsigned long long int var_15 = 12567313819742099993ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
