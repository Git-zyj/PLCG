#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)81;
long long int var_5 = 609067859779897037LL;
int var_6 = 1088056936;
short var_10 = (short)-25;
int zero = 0;
long long int var_12 = 9016669746372829243LL;
int var_13 = 927910522;
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
