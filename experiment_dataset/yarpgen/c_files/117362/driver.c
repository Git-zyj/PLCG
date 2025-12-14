#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned short var_2 = (unsigned short)2291;
unsigned int var_4 = 151171355U;
unsigned short var_8 = (unsigned short)62334;
unsigned long long int var_12 = 9151779907064400788ULL;
int zero = 0;
short var_15 = (short)1169;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
