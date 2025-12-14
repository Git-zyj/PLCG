#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5663;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)105;
unsigned char var_14 = (unsigned char)56;
short var_16 = (short)-1416;
unsigned long long int var_18 = 12654235653598131824ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
signed char var_20 = (signed char)16;
signed char var_21 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
