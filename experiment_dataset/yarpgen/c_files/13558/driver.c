#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1961;
signed char var_1 = (signed char)-125;
unsigned char var_2 = (unsigned char)180;
unsigned char var_5 = (unsigned char)188;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-31367;
signed char var_11 = (signed char)-36;
int zero = 0;
short var_12 = (short)-31599;
short var_13 = (short)16597;
short var_14 = (short)-20503;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
