#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28756;
unsigned long long int var_3 = 2115787520177066184ULL;
signed char var_6 = (signed char)123;
unsigned short var_8 = (unsigned short)5259;
int zero = 0;
int var_11 = 620253563;
long long int var_12 = 7224559092428981865LL;
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
