#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5274680599064201990ULL;
long long int var_7 = 7709025907455248788LL;
unsigned short var_13 = (unsigned short)235;
int zero = 0;
unsigned char var_14 = (unsigned char)8;
unsigned short var_15 = (unsigned short)25714;
short var_16 = (short)4886;
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
