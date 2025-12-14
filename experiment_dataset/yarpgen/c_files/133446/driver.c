#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -204523706;
_Bool var_5 = (_Bool)1;
short var_13 = (short)19622;
unsigned int var_15 = 2040561619U;
int zero = 0;
int var_16 = -769140637;
unsigned short var_17 = (unsigned short)23026;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
