#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3034319434531983322ULL;
unsigned char var_7 = (unsigned char)29;
unsigned long long int var_8 = 13919227375130841739ULL;
long long int var_10 = -2553314893060262099LL;
unsigned char var_12 = (unsigned char)164;
int zero = 0;
int var_13 = 1863815408;
unsigned int var_14 = 603822547U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 4106896687U;
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
