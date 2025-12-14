#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6317892830688863555LL;
unsigned char var_3 = (unsigned char)6;
unsigned int var_5 = 2626024472U;
unsigned char var_9 = (unsigned char)130;
int zero = 0;
signed char var_10 = (signed char)97;
unsigned short var_11 = (unsigned short)34100;
unsigned short var_12 = (unsigned short)16738;
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
