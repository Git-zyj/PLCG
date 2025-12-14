#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3434520532U;
unsigned long long int var_6 = 174582741703611969ULL;
unsigned short var_9 = (unsigned short)62850;
unsigned short var_11 = (unsigned short)33806;
unsigned long long int var_12 = 3698022381241499691ULL;
int zero = 0;
unsigned int var_14 = 1190639371U;
unsigned short var_15 = (unsigned short)9849;
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
