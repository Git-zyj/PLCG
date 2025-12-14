#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned char var_1 = (unsigned char)125;
unsigned short var_6 = (unsigned short)33686;
unsigned short var_7 = (unsigned short)38130;
unsigned short var_9 = (unsigned short)57977;
int zero = 0;
unsigned short var_10 = (unsigned short)51605;
unsigned char var_11 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
