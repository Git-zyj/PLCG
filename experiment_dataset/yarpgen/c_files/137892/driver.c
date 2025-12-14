#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5192525085278765479ULL;
unsigned char var_1 = (unsigned char)110;
unsigned long long int var_7 = 16563960394122223134ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)195;
unsigned int var_13 = 3774341182U;
void init() {
}

void checksum() {
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
