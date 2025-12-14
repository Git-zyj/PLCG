#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16543;
signed char var_8 = (signed char)-75;
unsigned char var_15 = (unsigned char)122;
int zero = 0;
long long int var_20 = -6345564308169142789LL;
signed char var_21 = (signed char)58;
void init() {
}

void checksum() {
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
