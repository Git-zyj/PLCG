#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
signed char var_2 = (signed char)-2;
unsigned long long int var_6 = 2250001553322001368ULL;
signed char var_7 = (signed char)-55;
unsigned long long int var_8 = 1510010320836433653ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)32678;
unsigned int var_11 = 2897523640U;
unsigned char var_12 = (unsigned char)211;
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
