#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned int var_6 = 1727612067U;
unsigned char var_9 = (unsigned char)240;
unsigned char var_13 = (unsigned char)75;
unsigned int var_16 = 1124100720U;
int zero = 0;
unsigned int var_20 = 3405639165U;
unsigned char var_21 = (unsigned char)227;
signed char var_22 = (signed char)-114;
unsigned long long int var_23 = 4026694365146235213ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
