#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18568;
unsigned short var_4 = (unsigned short)33070;
signed char var_9 = (signed char)-14;
unsigned int var_13 = 3583588439U;
int zero = 0;
short var_19 = (short)-1586;
int var_20 = -896746956;
unsigned short var_21 = (unsigned short)62686;
unsigned short var_22 = (unsigned short)12063;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
