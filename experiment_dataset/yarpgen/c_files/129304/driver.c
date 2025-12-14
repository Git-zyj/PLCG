#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 189239414;
short var_4 = (short)-23255;
unsigned short var_5 = (unsigned short)8649;
signed char var_6 = (signed char)-54;
unsigned long long int var_8 = 13052521729717880995ULL;
int zero = 0;
unsigned long long int var_12 = 12292590283128900018ULL;
signed char var_13 = (signed char)-81;
unsigned short var_14 = (unsigned short)22502;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
