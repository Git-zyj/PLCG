#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4730685899150351768LL;
unsigned char var_3 = (unsigned char)129;
unsigned long long int var_5 = 4713619522462573390ULL;
unsigned char var_12 = (unsigned char)126;
unsigned char var_13 = (unsigned char)130;
int zero = 0;
signed char var_14 = (signed char)-69;
unsigned short var_15 = (unsigned short)15558;
unsigned int var_16 = 2820482599U;
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
