#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
signed char var_1 = (signed char)97;
int var_4 = 1971426888;
int zero = 0;
unsigned short var_13 = (unsigned short)51722;
unsigned short var_14 = (unsigned short)40941;
unsigned long long int var_15 = 6921186298315226784ULL;
unsigned short var_16 = (unsigned short)14240;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
