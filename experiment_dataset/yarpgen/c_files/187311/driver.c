#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1943960450;
long long int var_7 = 2586512795718379187LL;
long long int var_9 = -3049973878294611511LL;
int zero = 0;
short var_10 = (short)-11589;
unsigned int var_11 = 2325920797U;
unsigned short var_12 = (unsigned short)38646;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
