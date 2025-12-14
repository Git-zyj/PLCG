#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11027;
unsigned char var_1 = (unsigned char)237;
signed char var_3 = (signed char)-33;
unsigned char var_8 = (unsigned char)194;
int zero = 0;
unsigned long long int var_11 = 15657357070039846863ULL;
unsigned char var_12 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
