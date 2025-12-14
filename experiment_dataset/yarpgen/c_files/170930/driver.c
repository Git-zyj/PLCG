#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26193;
signed char var_1 = (signed char)-11;
unsigned long long int var_2 = 17920796936274121666ULL;
unsigned char var_3 = (unsigned char)174;
unsigned char var_10 = (unsigned char)33;
unsigned char var_12 = (unsigned char)48;
int zero = 0;
unsigned char var_14 = (unsigned char)253;
unsigned short var_15 = (unsigned short)14251;
unsigned short var_16 = (unsigned short)49019;
void init() {
}

void checksum() {
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
