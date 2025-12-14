#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 875626530U;
unsigned char var_4 = (unsigned char)77;
short var_9 = (short)24878;
unsigned long long int var_12 = 16069246421145047291ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)54866;
signed char var_17 = (signed char)-11;
void init() {
}

void checksum() {
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
