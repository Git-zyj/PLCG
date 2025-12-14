#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27826;
unsigned short var_1 = (unsigned short)57846;
unsigned short var_2 = (unsigned short)25039;
unsigned char var_3 = (unsigned char)174;
unsigned short var_6 = (unsigned short)21818;
unsigned short var_8 = (unsigned short)56971;
unsigned char var_10 = (unsigned char)99;
unsigned short var_11 = (unsigned short)22059;
int zero = 0;
unsigned short var_12 = (unsigned short)19909;
unsigned short var_13 = (unsigned short)8796;
void init() {
}

void checksum() {
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
