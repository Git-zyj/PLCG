#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)142;
unsigned long long int var_10 = 17900137212100958751ULL;
signed char var_11 = (signed char)69;
int zero = 0;
unsigned char var_16 = (unsigned char)17;
unsigned long long int var_17 = 11659729469958309947ULL;
signed char var_18 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
