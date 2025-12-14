#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2641;
unsigned char var_10 = (unsigned char)111;
unsigned int var_11 = 1259015642U;
signed char var_14 = (signed char)-61;
int zero = 0;
long long int var_19 = -7721440937564167869LL;
unsigned int var_20 = 394413202U;
unsigned char var_21 = (unsigned char)17;
signed char var_22 = (signed char)-27;
void init() {
}

void checksum() {
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
