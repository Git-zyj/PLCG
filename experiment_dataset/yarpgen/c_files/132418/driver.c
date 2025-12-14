#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)32070;
unsigned char var_11 = (unsigned char)89;
short var_14 = (short)-13472;
int zero = 0;
short var_19 = (short)-19261;
unsigned char var_20 = (unsigned char)150;
unsigned char var_21 = (unsigned char)39;
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
