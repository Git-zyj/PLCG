#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45123;
signed char var_2 = (signed char)-66;
unsigned int var_8 = 4180456783U;
unsigned char var_9 = (unsigned char)59;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-1701;
short var_13 = (short)-11630;
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
