#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)13;
int var_9 = 1723436854;
unsigned char var_12 = (unsigned char)122;
int var_14 = 1652893698;
int zero = 0;
int var_18 = -152591329;
unsigned long long int var_19 = 8722116279562626052ULL;
unsigned char var_20 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
