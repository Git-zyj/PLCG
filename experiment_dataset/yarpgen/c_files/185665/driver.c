#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27977;
short var_5 = (short)7073;
short var_6 = (short)-3891;
signed char var_7 = (signed char)94;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)52;
short var_12 = (short)-8367;
unsigned long long int var_13 = 5352113119923856570ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
