#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1819519144;
int var_1 = 1343881021;
unsigned short var_5 = (unsigned short)1943;
short var_7 = (short)6016;
int var_13 = 1603971343;
int zero = 0;
unsigned long long int var_15 = 13013006732643950091ULL;
long long int var_16 = -766104536650362060LL;
signed char var_17 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
