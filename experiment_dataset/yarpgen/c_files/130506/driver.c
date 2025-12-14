#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1598692811;
signed char var_7 = (signed char)111;
unsigned short var_10 = (unsigned short)18637;
int zero = 0;
signed char var_12 = (signed char)118;
unsigned int var_13 = 4020667735U;
unsigned char var_14 = (unsigned char)187;
void init() {
}

void checksum() {
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
