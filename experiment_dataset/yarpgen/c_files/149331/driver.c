#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -140019084;
long long int var_10 = 11929796473132983LL;
int var_11 = 212343969;
unsigned char var_12 = (unsigned char)222;
int zero = 0;
unsigned short var_19 = (unsigned short)39022;
short var_20 = (short)-741;
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
