#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)61;
unsigned long long int var_12 = 10479635518700059449ULL;
unsigned short var_14 = (unsigned short)7415;
int zero = 0;
unsigned long long int var_19 = 15115182762658767870ULL;
unsigned long long int var_20 = 3590595216221569453ULL;
unsigned int var_21 = 1607023342U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
