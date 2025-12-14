#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned char var_8 = (unsigned char)172;
unsigned char var_9 = (unsigned char)145;
int zero = 0;
unsigned int var_11 = 2296832807U;
unsigned char var_12 = (unsigned char)214;
unsigned int var_13 = 698552839U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
