#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17178;
unsigned long long int var_4 = 2479598984428020591ULL;
unsigned short var_13 = (unsigned short)47496;
unsigned char var_18 = (unsigned char)132;
int zero = 0;
unsigned short var_19 = (unsigned short)36762;
unsigned long long int var_20 = 9793048739333558644ULL;
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
