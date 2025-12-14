#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)87;
short var_5 = (short)-29711;
short var_8 = (short)19026;
unsigned char var_13 = (unsigned char)176;
unsigned char var_17 = (unsigned char)169;
int zero = 0;
unsigned char var_18 = (unsigned char)88;
unsigned long long int var_19 = 17434916374600508693ULL;
int var_20 = 1564970408;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
