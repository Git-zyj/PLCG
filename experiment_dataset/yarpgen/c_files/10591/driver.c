#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9791;
unsigned int var_7 = 793388041U;
short var_8 = (short)7791;
unsigned long long int var_12 = 2528865596707326972ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)207;
short var_16 = (short)-10497;
int var_17 = -587601819;
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
