#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
short var_2 = (short)351;
unsigned char var_5 = (unsigned char)65;
unsigned short var_7 = (unsigned short)24934;
int zero = 0;
unsigned long long int var_17 = 12606839104400617478ULL;
unsigned char var_18 = (unsigned char)19;
unsigned int var_19 = 4113875986U;
unsigned char var_20 = (unsigned char)51;
unsigned char var_21 = (unsigned char)160;
unsigned long long int var_22 = 16888374986635173706ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
