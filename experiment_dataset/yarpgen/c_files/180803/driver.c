#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)5101;
unsigned short var_3 = (unsigned short)21836;
signed char var_6 = (signed char)-38;
signed char var_8 = (signed char)-27;
unsigned short var_9 = (unsigned short)55324;
unsigned int var_10 = 3568807366U;
unsigned short var_17 = (unsigned short)41954;
int zero = 0;
unsigned short var_19 = (unsigned short)19340;
int var_20 = 793156159;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
