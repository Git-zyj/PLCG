#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1385279140U;
unsigned short var_2 = (unsigned short)18058;
unsigned short var_4 = (unsigned short)5017;
int var_5 = 1289309696;
signed char var_7 = (signed char)63;
int var_11 = 2098878994;
int zero = 0;
unsigned short var_12 = (unsigned short)3758;
int var_13 = 1421085606;
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
