#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7542;
unsigned char var_6 = (unsigned char)51;
signed char var_9 = (signed char)-45;
short var_12 = (short)6594;
unsigned int var_14 = 3182533790U;
long long int var_16 = -3696548519248900274LL;
int zero = 0;
long long int var_17 = -8703882909555462017LL;
long long int var_18 = 4581108283733191150LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
