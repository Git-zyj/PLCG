#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38898;
long long int var_1 = -1438326143900931506LL;
short var_2 = (short)9576;
unsigned char var_3 = (unsigned char)222;
int zero = 0;
int var_16 = -1364341137;
unsigned short var_17 = (unsigned short)17594;
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
