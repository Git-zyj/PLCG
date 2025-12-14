#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2212751493U;
unsigned short var_7 = (unsigned short)22212;
unsigned short var_8 = (unsigned short)2355;
signed char var_11 = (signed char)-10;
int zero = 0;
unsigned int var_14 = 1868306970U;
unsigned short var_15 = (unsigned short)60565;
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
