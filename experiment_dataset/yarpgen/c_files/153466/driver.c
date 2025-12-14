#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4145711745U;
unsigned long long int var_10 = 6737018464354762409ULL;
unsigned short var_16 = (unsigned short)1143;
int zero = 0;
unsigned char var_18 = (unsigned char)215;
long long int var_19 = 1760607117814084424LL;
unsigned long long int var_20 = 16482624006035742959ULL;
unsigned long long int var_21 = 6432917940198602429ULL;
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
