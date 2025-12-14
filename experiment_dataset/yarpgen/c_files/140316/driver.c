#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6494850548404047337ULL;
unsigned short var_12 = (unsigned short)51987;
unsigned short var_13 = (unsigned short)46923;
int zero = 0;
short var_14 = (short)17942;
unsigned char var_15 = (unsigned char)150;
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
