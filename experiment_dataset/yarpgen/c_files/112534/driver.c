#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26768;
unsigned short var_4 = (unsigned short)65472;
unsigned long long int var_6 = 18305281615914525917ULL;
long long int var_7 = -804974464362508858LL;
unsigned char var_8 = (unsigned char)100;
short var_9 = (short)11852;
int zero = 0;
unsigned long long int var_12 = 8634837821197307398ULL;
short var_13 = (short)-18061;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
