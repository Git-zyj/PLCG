#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7898;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-6;
int zero = 0;
unsigned int var_13 = 1590851766U;
unsigned int var_14 = 2273022787U;
unsigned short var_15 = (unsigned short)19514;
void init() {
}

void checksum() {
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
