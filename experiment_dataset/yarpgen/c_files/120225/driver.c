#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 464434940U;
signed char var_10 = (signed char)62;
unsigned int var_11 = 11712735U;
signed char var_13 = (signed char)-78;
int zero = 0;
signed char var_19 = (signed char)-45;
unsigned short var_20 = (unsigned short)54464;
unsigned short var_21 = (unsigned short)6831;
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
