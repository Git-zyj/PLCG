#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)49016;
unsigned long long int var_12 = 2544468852491219950ULL;
unsigned short var_14 = (unsigned short)162;
int var_17 = -314785873;
unsigned short var_18 = (unsigned short)26988;
int zero = 0;
unsigned short var_19 = (unsigned short)37316;
short var_20 = (short)-9006;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
