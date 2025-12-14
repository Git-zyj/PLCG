#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-1253;
unsigned short var_5 = (unsigned short)61463;
unsigned char var_6 = (unsigned char)167;
unsigned long long int var_10 = 16929538432920841957ULL;
int var_15 = 176276178;
int zero = 0;
signed char var_16 = (signed char)-72;
signed char var_17 = (signed char)-68;
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
