#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned int var_2 = 2430155177U;
int var_3 = 725237894;
unsigned int var_5 = 4218455157U;
int var_6 = 214593713;
int var_7 = 378105490;
int var_9 = -1171110794;
unsigned int var_12 = 2330800524U;
short var_13 = (short)24382;
unsigned int var_14 = 3136717427U;
unsigned int var_16 = 3658730793U;
unsigned long long int var_17 = 12508843939688190772ULL;
signed char var_19 = (signed char)57;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
int var_21 = -1289400282;
unsigned long long int var_22 = 15857705547856283900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
