#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)16;
unsigned short var_8 = (unsigned short)32597;
long long int var_9 = 278680758834830757LL;
unsigned short var_13 = (unsigned short)7184;
int zero = 0;
unsigned long long int var_15 = 7738820531824522407ULL;
short var_16 = (short)5606;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
