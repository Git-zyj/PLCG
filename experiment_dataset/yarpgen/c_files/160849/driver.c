#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32690;
int var_3 = -1667106469;
short var_6 = (short)19215;
int zero = 0;
unsigned short var_14 = (unsigned short)1646;
int var_15 = -1091287839;
unsigned long long int var_16 = 14391416809608180385ULL;
unsigned long long int var_17 = 3040223727664139957ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
