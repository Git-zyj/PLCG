#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
unsigned char var_7 = (unsigned char)149;
unsigned long long int var_12 = 12204867756011106887ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6346680071381169680ULL;
int var_15 = 427914986;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
