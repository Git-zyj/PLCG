#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41746;
short var_9 = (short)-6046;
int zero = 0;
short var_11 = (short)21682;
long long int var_12 = 1321289009176961046LL;
unsigned short var_13 = (unsigned short)25092;
long long int var_14 = 8996824442256202028LL;
short var_15 = (short)-8117;
unsigned int var_16 = 831371415U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
