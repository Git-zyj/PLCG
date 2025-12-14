#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3006367960U;
unsigned char var_3 = (unsigned char)71;
unsigned char var_5 = (unsigned char)186;
unsigned char var_7 = (unsigned char)106;
unsigned char var_8 = (unsigned char)76;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
unsigned char var_12 = (unsigned char)94;
unsigned char var_13 = (unsigned char)75;
unsigned int var_14 = 294779990U;
unsigned int var_15 = 63012220U;
unsigned int var_16 = 3021325755U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
