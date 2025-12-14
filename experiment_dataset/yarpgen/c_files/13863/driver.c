#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14474443153872956631ULL;
int var_5 = 1711046321;
unsigned long long int var_6 = 6902202489408602254ULL;
short var_8 = (short)31354;
unsigned char var_10 = (unsigned char)171;
unsigned long long int var_12 = 12300500016403389719ULL;
int zero = 0;
unsigned int var_13 = 2972256641U;
unsigned int var_14 = 48643549U;
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
