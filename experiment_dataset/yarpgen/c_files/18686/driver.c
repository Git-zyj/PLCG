#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
short var_3 = (short)13729;
unsigned int var_8 = 3371259536U;
signed char var_11 = (signed char)-53;
signed char var_12 = (signed char)-27;
unsigned int var_13 = 1412071688U;
int zero = 0;
long long int var_14 = 1006582938800757080LL;
signed char var_15 = (signed char)113;
unsigned short var_16 = (unsigned short)12692;
long long int var_17 = 7308142371509137586LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
