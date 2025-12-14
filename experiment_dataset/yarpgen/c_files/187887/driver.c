#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 200181445U;
long long int var_3 = 1229548640525348757LL;
unsigned long long int var_14 = 9309682037365761675ULL;
int zero = 0;
unsigned int var_20 = 977286591U;
long long int var_21 = 2205972815345648164LL;
unsigned char var_22 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
