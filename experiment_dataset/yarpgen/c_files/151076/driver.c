#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
unsigned long long int var_12 = 11162262180350013210ULL;
unsigned int var_13 = 341382067U;
unsigned char var_17 = (unsigned char)67;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 4785297329056060428ULL;
short var_23 = (short)32404;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
