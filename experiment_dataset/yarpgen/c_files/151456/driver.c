#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5296532364976436074LL;
unsigned char var_5 = (unsigned char)235;
unsigned char var_6 = (unsigned char)70;
int var_12 = 750371190;
int zero = 0;
signed char var_17 = (signed char)93;
short var_18 = (short)26450;
unsigned char var_19 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
