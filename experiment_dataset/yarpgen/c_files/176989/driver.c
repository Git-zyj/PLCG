#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
unsigned char var_2 = (unsigned char)46;
unsigned short var_4 = (unsigned short)36622;
int var_5 = -344430069;
unsigned short var_7 = (unsigned short)47920;
unsigned char var_8 = (unsigned char)115;
int zero = 0;
int var_10 = 1372528072;
unsigned char var_11 = (unsigned char)58;
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
