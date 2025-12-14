#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7648995883520143909LL;
unsigned short var_6 = (unsigned short)19010;
unsigned short var_9 = (unsigned short)1421;
short var_10 = (short)-13212;
int zero = 0;
unsigned short var_11 = (unsigned short)16147;
int var_12 = 1290465068;
unsigned int var_13 = 2014669776U;
long long int var_14 = 3530131246733946507LL;
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
