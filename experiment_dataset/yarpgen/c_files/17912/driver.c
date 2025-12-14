#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -549623297;
unsigned char var_14 = (unsigned char)63;
unsigned short var_19 = (unsigned short)42130;
int zero = 0;
unsigned char var_20 = (unsigned char)52;
int var_21 = -1775145225;
unsigned int var_22 = 1376268194U;
void init() {
}

void checksum() {
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
