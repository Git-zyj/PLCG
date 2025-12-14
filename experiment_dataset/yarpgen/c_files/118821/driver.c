#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned char var_2 = (unsigned char)157;
int var_5 = -590414927;
int var_6 = -115112258;
unsigned int var_9 = 1381806127U;
int zero = 0;
unsigned char var_10 = (unsigned char)148;
long long int var_11 = 8253296914104720009LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
