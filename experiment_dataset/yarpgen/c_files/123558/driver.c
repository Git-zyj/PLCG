#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23083;
unsigned char var_2 = (unsigned char)25;
long long int var_4 = -936975500520455639LL;
signed char var_5 = (signed char)69;
unsigned long long int var_6 = 11069337728100557277ULL;
signed char var_7 = (signed char)107;
unsigned char var_8 = (unsigned char)85;
unsigned int var_9 = 2561837265U;
unsigned int var_10 = 1679863784U;
int zero = 0;
int var_11 = 2085265583;
long long int var_12 = 3100654919917632845LL;
unsigned int var_13 = 1663061332U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
