#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -706726744;
int var_8 = 2086381483;
signed char var_9 = (signed char)-18;
int zero = 0;
unsigned char var_14 = (unsigned char)246;
unsigned short var_15 = (unsigned short)29900;
void init() {
}

void checksum() {
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
