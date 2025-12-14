#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3186918499196184422ULL;
signed char var_4 = (signed char)64;
unsigned long long int var_8 = 15347990613200141115ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2904996611U;
int zero = 0;
int var_12 = -2006680140;
unsigned short var_13 = (unsigned short)6504;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
