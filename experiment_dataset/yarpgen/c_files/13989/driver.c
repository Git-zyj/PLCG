#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13823;
unsigned int var_6 = 3663336075U;
unsigned char var_7 = (unsigned char)211;
unsigned long long int var_8 = 6966924989659764663ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)143;
int zero = 0;
long long int var_15 = 5267256130652348666LL;
unsigned short var_16 = (unsigned short)63247;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
