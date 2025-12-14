#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6048;
unsigned short var_3 = (unsigned short)39276;
unsigned short var_4 = (unsigned short)12289;
unsigned short var_7 = (unsigned short)11380;
int zero = 0;
unsigned short var_10 = (unsigned short)7227;
unsigned short var_11 = (unsigned short)14938;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
