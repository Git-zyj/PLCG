#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned short var_7 = (unsigned short)35926;
short var_9 = (short)23630;
unsigned int var_15 = 1973699769U;
int zero = 0;
unsigned char var_18 = (unsigned char)251;
int var_19 = 2121559119;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
