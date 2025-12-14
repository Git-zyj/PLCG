#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)177;
unsigned int var_4 = 2939268177U;
unsigned char var_7 = (unsigned char)153;
int zero = 0;
short var_10 = (short)-23708;
short var_11 = (short)-18364;
short var_12 = (short)-8835;
unsigned long long int var_13 = 18177987366863136756ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
