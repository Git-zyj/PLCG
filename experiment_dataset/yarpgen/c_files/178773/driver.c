#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1700574816;
short var_9 = (short)11691;
int var_11 = -1365499436;
short var_13 = (short)23878;
int zero = 0;
unsigned short var_15 = (unsigned short)11289;
unsigned int var_16 = 2847095075U;
unsigned int var_17 = 1945310976U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
