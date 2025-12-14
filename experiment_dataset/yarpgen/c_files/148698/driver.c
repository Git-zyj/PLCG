#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12127;
short var_6 = (short)-32550;
unsigned short var_10 = (unsigned short)61197;
int zero = 0;
int var_14 = -2055718963;
unsigned long long int var_15 = 10071609942927941715ULL;
signed char var_16 = (signed char)-89;
void init() {
}

void checksum() {
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
