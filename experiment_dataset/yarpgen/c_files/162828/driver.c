#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39548;
long long int var_4 = 3018783226011614659LL;
unsigned short var_6 = (unsigned short)54128;
unsigned char var_11 = (unsigned char)123;
unsigned long long int var_12 = 2052253647104552744ULL;
unsigned short var_13 = (unsigned short)14128;
int zero = 0;
unsigned long long int var_19 = 5739971295889367700ULL;
short var_20 = (short)-27517;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
