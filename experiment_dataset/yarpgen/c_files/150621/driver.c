#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned int var_3 = 3734131525U;
unsigned char var_4 = (unsigned char)186;
unsigned char var_5 = (unsigned char)194;
unsigned char var_6 = (unsigned char)120;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
unsigned char var_13 = (unsigned char)101;
unsigned char var_14 = (unsigned char)115;
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
