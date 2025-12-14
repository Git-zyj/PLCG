#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25115;
unsigned int var_11 = 4117929500U;
unsigned long long int var_12 = 9140580650129592414ULL;
int var_14 = -1700810192;
int zero = 0;
unsigned char var_17 = (unsigned char)248;
unsigned long long int var_18 = 10584719787799750667ULL;
int var_19 = 214235773;
unsigned char var_20 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
