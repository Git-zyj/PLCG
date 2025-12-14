#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43947;
unsigned char var_10 = (unsigned char)181;
unsigned int var_18 = 3714916040U;
int zero = 0;
unsigned long long int var_19 = 4271600755216439520ULL;
unsigned char var_20 = (unsigned char)80;
int var_21 = 768602917;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
