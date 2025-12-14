#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8929;
unsigned int var_6 = 3332018104U;
unsigned int var_8 = 248708172U;
signed char var_12 = (signed char)-64;
unsigned char var_13 = (unsigned char)253;
int zero = 0;
unsigned int var_16 = 482903401U;
unsigned int var_17 = 3882257737U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
