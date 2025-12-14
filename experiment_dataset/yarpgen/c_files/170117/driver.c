#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4830334587487357901ULL;
unsigned int var_8 = 2568664685U;
unsigned int var_13 = 3956447872U;
int zero = 0;
unsigned char var_15 = (unsigned char)152;
unsigned short var_16 = (unsigned short)23637;
signed char var_17 = (signed char)33;
unsigned short var_18 = (unsigned short)30487;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
