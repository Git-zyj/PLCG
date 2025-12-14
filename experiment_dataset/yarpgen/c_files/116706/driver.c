#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)248;
unsigned long long int var_5 = 6388412978743561066ULL;
short var_7 = (short)6528;
int var_9 = -1230907393;
unsigned char var_10 = (unsigned char)117;
int zero = 0;
unsigned char var_12 = (unsigned char)99;
short var_13 = (short)27076;
signed char var_14 = (signed char)-40;
unsigned int var_15 = 376030171U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
