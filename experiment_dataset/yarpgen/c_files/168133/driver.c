#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18839;
unsigned char var_4 = (unsigned char)12;
unsigned char var_9 = (unsigned char)120;
short var_12 = (short)-12262;
int zero = 0;
unsigned int var_13 = 222595671U;
long long int var_14 = -8281972651416607481LL;
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
