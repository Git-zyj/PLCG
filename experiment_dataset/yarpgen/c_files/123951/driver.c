#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1784062333;
unsigned short var_3 = (unsigned short)314;
unsigned short var_4 = (unsigned short)8296;
long long int var_5 = 196663399000648432LL;
unsigned char var_8 = (unsigned char)59;
unsigned long long int var_9 = 15493755152615339993ULL;
long long int var_10 = -5090837495197310355LL;
int zero = 0;
unsigned long long int var_12 = 17355563065641197142ULL;
unsigned int var_13 = 1561714064U;
void init() {
}

void checksum() {
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
