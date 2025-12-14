#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2134518375U;
unsigned int var_2 = 4092777165U;
int var_5 = 642023912;
int zero = 0;
long long int var_13 = 4849187307216170199LL;
unsigned short var_14 = (unsigned short)2277;
unsigned int var_15 = 3616929333U;
unsigned int var_16 = 332009988U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
