#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14052948661753301782ULL;
int var_2 = -43458787;
unsigned char var_7 = (unsigned char)5;
unsigned int var_8 = 763497818U;
int zero = 0;
int var_11 = -1933583027;
unsigned char var_12 = (unsigned char)28;
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
