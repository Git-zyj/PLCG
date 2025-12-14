#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
short var_13 = (short)11081;
unsigned short var_17 = (unsigned short)41078;
int zero = 0;
short var_20 = (short)-3295;
unsigned char var_21 = (unsigned char)103;
unsigned int var_22 = 1955532548U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
