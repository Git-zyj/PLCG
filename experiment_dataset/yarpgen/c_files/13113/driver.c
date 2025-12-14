#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2699215386U;
int var_10 = -2041994841;
short var_17 = (short)-1519;
unsigned short var_19 = (unsigned short)63183;
int zero = 0;
unsigned int var_20 = 1280847589U;
signed char var_21 = (signed char)-15;
unsigned char var_22 = (unsigned char)145;
unsigned int var_23 = 236852362U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
