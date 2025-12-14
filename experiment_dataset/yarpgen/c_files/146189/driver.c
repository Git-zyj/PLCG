#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)31835;
unsigned char var_7 = (unsigned char)47;
unsigned long long int var_8 = 11370150114114154187ULL;
int zero = 0;
long long int var_17 = 817797139069755734LL;
signed char var_18 = (signed char)24;
void init() {
}

void checksum() {
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
