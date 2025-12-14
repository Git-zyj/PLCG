#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3856345634U;
unsigned short var_3 = (unsigned short)19823;
unsigned short var_8 = (unsigned short)57867;
int var_10 = -196848815;
int zero = 0;
unsigned int var_12 = 1149888371U;
unsigned char var_13 = (unsigned char)240;
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
