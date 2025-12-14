#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
int var_2 = 1175112778;
int var_6 = 1128500101;
unsigned char var_8 = (unsigned char)143;
signed char var_9 = (signed char)40;
int zero = 0;
signed char var_10 = (signed char)-99;
unsigned int var_11 = 1664932945U;
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
