#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12022279808192987916ULL;
long long int var_5 = 4341858475644903607LL;
unsigned short var_9 = (unsigned short)61057;
unsigned char var_13 = (unsigned char)139;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
int var_17 = 1927268292;
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
