#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1850983078;
unsigned char var_4 = (unsigned char)227;
unsigned short var_7 = (unsigned short)4133;
int zero = 0;
long long int var_10 = 5745121506484874279LL;
int var_11 = 390286605;
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
