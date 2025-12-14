#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned int var_13 = 1796324946U;
long long int var_17 = -247619734498948864LL;
int zero = 0;
unsigned long long int var_19 = 5466507260799197573ULL;
unsigned char var_20 = (unsigned char)242;
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
