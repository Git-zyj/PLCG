#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2863393600U;
short var_4 = (short)-13245;
unsigned int var_6 = 765460925U;
unsigned char var_11 = (unsigned char)16;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-123;
int var_21 = 2120491051;
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
