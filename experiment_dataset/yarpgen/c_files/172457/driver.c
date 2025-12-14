#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)23159;
unsigned short var_10 = (unsigned short)52915;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3207322153U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)42868;
unsigned int var_15 = 4189199610U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
