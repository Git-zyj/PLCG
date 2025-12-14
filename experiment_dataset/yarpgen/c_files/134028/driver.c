#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned short var_1 = (unsigned short)9257;
unsigned char var_2 = (unsigned char)179;
short var_3 = (short)5021;
short var_4 = (short)-4028;
long long int var_5 = -7732935627899313305LL;
int zero = 0;
unsigned char var_10 = (unsigned char)41;
unsigned char var_11 = (unsigned char)192;
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
