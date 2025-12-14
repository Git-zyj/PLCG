#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23620;
long long int var_4 = 8209343395421636787LL;
unsigned char var_6 = (unsigned char)130;
signed char var_8 = (signed char)-89;
short var_9 = (short)-14215;
int zero = 0;
short var_14 = (short)5203;
short var_15 = (short)-1731;
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
