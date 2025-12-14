#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16091604282972671942ULL;
long long int var_2 = 6867000766215824105LL;
unsigned short var_3 = (unsigned short)61630;
unsigned int var_6 = 1094914576U;
unsigned short var_9 = (unsigned short)57606;
int zero = 0;
unsigned int var_11 = 4050519865U;
long long int var_12 = 6009012156830267431LL;
unsigned short var_13 = (unsigned short)42446;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
