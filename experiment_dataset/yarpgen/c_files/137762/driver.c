#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)19;
unsigned char var_4 = (unsigned char)241;
unsigned int var_6 = 174949745U;
unsigned char var_7 = (unsigned char)207;
unsigned short var_9 = (unsigned short)29339;
unsigned long long int var_10 = 9283067181354059813ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)46;
unsigned long long int var_12 = 11865757108335492265ULL;
signed char var_13 = (signed char)-109;
void init() {
}

void checksum() {
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
