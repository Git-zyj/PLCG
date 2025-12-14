#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21951;
unsigned char var_1 = (unsigned char)204;
unsigned short var_4 = (unsigned short)35489;
unsigned int var_15 = 552673438U;
unsigned long long int var_18 = 10701534981843825129ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)50991;
unsigned int var_20 = 1393050795U;
unsigned int var_21 = 3599840347U;
unsigned char var_22 = (unsigned char)134;
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
