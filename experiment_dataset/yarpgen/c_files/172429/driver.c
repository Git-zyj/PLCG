#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2478712658931242898LL;
short var_4 = (short)24773;
signed char var_5 = (signed char)-71;
unsigned char var_6 = (unsigned char)222;
unsigned short var_8 = (unsigned short)15271;
unsigned int var_12 = 2091429530U;
int zero = 0;
short var_19 = (short)-16137;
short var_20 = (short)-12216;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
