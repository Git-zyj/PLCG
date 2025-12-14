#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)8346;
unsigned long long int var_6 = 17669522947805910228ULL;
unsigned char var_15 = (unsigned char)170;
int zero = 0;
unsigned int var_18 = 3198085700U;
int var_19 = -1091396424;
int var_20 = 1864704800;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
