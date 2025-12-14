#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4573;
unsigned long long int var_4 = 10236079549153704481ULL;
unsigned long long int var_8 = 4165432132563784050ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)146;
long long int var_12 = -832807220775727977LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
