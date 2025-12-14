#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 165798870821894649LL;
unsigned short var_2 = (unsigned short)29407;
unsigned char var_7 = (unsigned char)72;
unsigned short var_9 = (unsigned short)55795;
int zero = 0;
short var_14 = (short)-29167;
short var_15 = (short)-23787;
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
