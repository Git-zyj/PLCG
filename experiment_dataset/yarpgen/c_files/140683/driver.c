#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6973499658369172356LL;
unsigned int var_6 = 4045413185U;
short var_8 = (short)3028;
int zero = 0;
unsigned int var_16 = 4082774291U;
unsigned long long int var_17 = 13925282933847054014ULL;
void init() {
}

void checksum() {
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
