#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4068113810U;
short var_10 = (short)13627;
unsigned char var_15 = (unsigned char)80;
int zero = 0;
signed char var_18 = (signed char)112;
int var_19 = -1464659208;
unsigned long long int var_20 = 9102991412918328879ULL;
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
