#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1290825158625778871LL;
unsigned int var_3 = 872773102U;
short var_7 = (short)1780;
int zero = 0;
unsigned short var_11 = (unsigned short)41543;
unsigned char var_12 = (unsigned char)34;
unsigned short var_13 = (unsigned short)52552;
int var_14 = 143499800;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
