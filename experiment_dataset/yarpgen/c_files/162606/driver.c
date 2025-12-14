#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48942;
short var_7 = (short)29551;
int zero = 0;
unsigned char var_10 = (unsigned char)203;
signed char var_11 = (signed char)-11;
unsigned short var_12 = (unsigned short)12302;
unsigned char var_13 = (unsigned char)247;
unsigned char var_14 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
