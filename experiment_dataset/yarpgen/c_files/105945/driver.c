#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned long long int var_1 = 7590734337444890297ULL;
unsigned char var_7 = (unsigned char)26;
unsigned long long int var_8 = 10730486257673825806ULL;
int zero = 0;
short var_11 = (short)-23982;
short var_12 = (short)28576;
short var_13 = (short)21717;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
