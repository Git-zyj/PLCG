#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -7956508799827324721LL;
unsigned char var_13 = (unsigned char)124;
unsigned short var_16 = (unsigned short)28504;
int zero = 0;
unsigned short var_19 = (unsigned short)12028;
long long int var_20 = 4735282805930161185LL;
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
