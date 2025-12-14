#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3341974394132464507LL;
long long int var_5 = -3903563834535076320LL;
long long int var_9 = -5014213686702669492LL;
unsigned int var_15 = 359221703U;
int zero = 0;
unsigned char var_19 = (unsigned char)48;
unsigned char var_20 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
