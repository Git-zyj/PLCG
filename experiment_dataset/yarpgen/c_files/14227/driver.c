#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2998981727U;
unsigned short var_3 = (unsigned short)39550;
unsigned char var_4 = (unsigned char)204;
int var_5 = 1251190302;
unsigned char var_8 = (unsigned char)157;
int zero = 0;
unsigned short var_10 = (unsigned short)22277;
unsigned char var_11 = (unsigned char)117;
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
