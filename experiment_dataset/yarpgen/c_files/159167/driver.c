#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2043221435U;
unsigned char var_3 = (unsigned char)197;
int var_4 = -1408098943;
unsigned char var_5 = (unsigned char)98;
unsigned int var_8 = 2982382885U;
unsigned long long int var_11 = 14966817948659939579ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)1003;
signed char var_14 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
