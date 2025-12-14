#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2195270969U;
unsigned long long int var_5 = 11542051316267828859ULL;
int var_9 = 303370904;
int var_13 = -680018451;
int var_15 = -1140190179;
int var_16 = -711605884;
int zero = 0;
short var_17 = (short)-16739;
short var_18 = (short)-16417;
unsigned short var_19 = (unsigned short)26565;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
