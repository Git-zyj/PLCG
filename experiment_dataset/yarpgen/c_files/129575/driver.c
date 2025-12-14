#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48490;
int var_8 = -753444697;
unsigned long long int var_9 = 142305503859585211ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)42325;
int var_11 = -1293562355;
unsigned int var_12 = 2386306142U;
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
