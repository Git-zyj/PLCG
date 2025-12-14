#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7404787740202698900LL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)124;
unsigned short var_4 = (unsigned short)17336;
unsigned long long int var_5 = 1549841321812252212ULL;
int var_6 = -854134041;
int zero = 0;
unsigned int var_14 = 351298399U;
unsigned short var_15 = (unsigned short)55532;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
