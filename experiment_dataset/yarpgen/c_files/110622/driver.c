#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 407192684U;
unsigned char var_5 = (unsigned char)88;
unsigned short var_7 = (unsigned short)43175;
long long int var_11 = 4419241197757335993LL;
int var_12 = 1249039023;
int zero = 0;
long long int var_14 = 5359871041399080071LL;
_Bool var_15 = (_Bool)0;
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
