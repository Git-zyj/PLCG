#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)1;
unsigned char var_4 = (unsigned char)22;
unsigned char var_5 = (unsigned char)217;
unsigned char var_7 = (unsigned char)210;
int zero = 0;
unsigned char var_10 = (unsigned char)176;
unsigned char var_11 = (unsigned char)246;
unsigned char var_12 = (unsigned char)101;
unsigned char var_13 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
