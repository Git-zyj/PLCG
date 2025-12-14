#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42272;
long long int var_6 = 5188020332968020339LL;
unsigned short var_7 = (unsigned short)2021;
unsigned short var_11 = (unsigned short)31074;
int zero = 0;
long long int var_13 = 9188446310183349031LL;
long long int var_14 = 3871972263892925510LL;
short var_15 = (short)-7078;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
