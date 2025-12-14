#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 417436640U;
short var_2 = (short)-28739;
unsigned long long int var_7 = 1312716752732672281ULL;
unsigned int var_8 = 3066735902U;
signed char var_11 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_15 = 2879039222U;
unsigned long long int var_16 = 10753434282001029970ULL;
unsigned long long int var_17 = 6220993558773126238ULL;
int var_18 = -52956089;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
