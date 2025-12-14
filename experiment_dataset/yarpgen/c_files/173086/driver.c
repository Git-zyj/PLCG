#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2322698751U;
signed char var_3 = (signed char)82;
short var_6 = (short)17496;
unsigned int var_7 = 3994900168U;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)-15259;
unsigned char var_11 = (unsigned char)31;
unsigned int var_12 = 1599146673U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
