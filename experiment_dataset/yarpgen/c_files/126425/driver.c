#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)172;
unsigned long long int var_5 = 5508321372455609744ULL;
long long int var_7 = 7299386429737167305LL;
unsigned char var_10 = (unsigned char)105;
int zero = 0;
int var_13 = -1512815463;
unsigned int var_14 = 3963185693U;
unsigned char var_15 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
