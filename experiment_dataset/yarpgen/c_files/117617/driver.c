#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44219;
unsigned char var_2 = (unsigned char)14;
signed char var_5 = (signed char)-99;
unsigned long long int var_8 = 8654093555030148839ULL;
unsigned short var_14 = (unsigned short)35284;
int zero = 0;
signed char var_19 = (signed char)53;
unsigned int var_20 = 1856084402U;
long long int var_21 = 1163966012508107734LL;
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
