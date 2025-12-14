#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 6980629363015360287LL;
unsigned short var_12 = (unsigned short)52468;
int zero = 0;
unsigned int var_15 = 2101430064U;
unsigned char var_16 = (unsigned char)47;
int var_17 = -1056608224;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
