#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3643;
unsigned char var_7 = (unsigned char)237;
int var_8 = 1356381480;
unsigned char var_10 = (unsigned char)164;
int zero = 0;
unsigned int var_11 = 3190372259U;
int var_12 = 860364731;
void init() {
}

void checksum() {
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
