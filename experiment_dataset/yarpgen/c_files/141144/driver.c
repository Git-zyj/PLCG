#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-569;
unsigned char var_1 = (unsigned char)182;
unsigned short var_5 = (unsigned short)41656;
unsigned char var_9 = (unsigned char)177;
int zero = 0;
signed char var_10 = (signed char)0;
unsigned short var_11 = (unsigned short)7826;
unsigned int var_12 = 4262021485U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
