#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
unsigned char var_2 = (unsigned char)47;
unsigned char var_4 = (unsigned char)147;
unsigned char var_5 = (unsigned char)17;
unsigned char var_7 = (unsigned char)229;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
unsigned char var_14 = (unsigned char)167;
unsigned char var_15 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
