#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8639834562525481365ULL;
short var_3 = (short)-24349;
unsigned short var_6 = (unsigned short)25072;
int var_10 = -189836606;
int zero = 0;
unsigned int var_13 = 3681552680U;
short var_14 = (short)17757;
void init() {
}

void checksum() {
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
