#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6491019369618495366LL;
unsigned long long int var_8 = 10260433558041911790ULL;
signed char var_11 = (signed char)-32;
int zero = 0;
unsigned short var_12 = (unsigned short)3986;
unsigned char var_13 = (unsigned char)140;
unsigned char var_14 = (unsigned char)106;
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
