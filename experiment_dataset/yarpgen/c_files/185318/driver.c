#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62192;
unsigned char var_5 = (unsigned char)83;
unsigned int var_7 = 3070052348U;
unsigned long long int var_9 = 7673921879456323705ULL;
int zero = 0;
int var_12 = 42549878;
unsigned short var_13 = (unsigned short)15101;
unsigned char var_14 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
