#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24728;
unsigned char var_7 = (unsigned char)101;
unsigned short var_8 = (unsigned short)61216;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 14243660320129588660ULL;
int zero = 0;
unsigned long long int var_13 = 16675314287513163251ULL;
unsigned long long int var_14 = 4973216290071488378ULL;
unsigned char var_15 = (unsigned char)228;
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
