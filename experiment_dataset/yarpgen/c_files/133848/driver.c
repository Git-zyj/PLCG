#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)242;
unsigned short var_4 = (unsigned short)6332;
unsigned char var_14 = (unsigned char)61;
int var_16 = 1884767111;
int zero = 0;
unsigned short var_18 = (unsigned short)9417;
short var_19 = (short)-7924;
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
