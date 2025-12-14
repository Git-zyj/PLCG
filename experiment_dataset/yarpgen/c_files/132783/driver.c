#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1582158601;
signed char var_4 = (signed char)-12;
unsigned long long int var_5 = 10710954670723176537ULL;
unsigned long long int var_7 = 1263330461521791530ULL;
unsigned short var_8 = (unsigned short)41279;
int zero = 0;
int var_10 = 1671475575;
short var_11 = (short)-25197;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
