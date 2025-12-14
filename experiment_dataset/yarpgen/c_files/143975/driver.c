#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 521174617263208194ULL;
unsigned long long int var_2 = 8283655335049686934ULL;
unsigned int var_5 = 3807924249U;
unsigned char var_6 = (unsigned char)74;
int zero = 0;
unsigned char var_10 = (unsigned char)244;
unsigned char var_11 = (unsigned char)226;
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
