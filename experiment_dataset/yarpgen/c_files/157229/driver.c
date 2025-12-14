#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
signed char var_1 = (signed char)24;
unsigned long long int var_5 = 9365661869284637464ULL;
int var_7 = -1716222000;
short var_9 = (short)-32036;
int zero = 0;
unsigned short var_12 = (unsigned short)50959;
short var_13 = (short)26733;
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
