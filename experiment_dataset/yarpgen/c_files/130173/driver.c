#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11764179087091130064ULL;
unsigned int var_4 = 1812549137U;
unsigned char var_6 = (unsigned char)5;
int var_9 = 755892766;
unsigned int var_15 = 1214538047U;
int zero = 0;
signed char var_16 = (signed char)-98;
short var_17 = (short)24029;
unsigned char var_18 = (unsigned char)127;
unsigned char var_19 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
