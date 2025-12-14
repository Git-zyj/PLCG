#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
long long int var_2 = -33570112776567689LL;
short var_4 = (short)-11933;
short var_6 = (short)28489;
unsigned short var_7 = (unsigned short)28745;
signed char var_8 = (signed char)102;
int var_11 = -408854954;
int zero = 0;
unsigned int var_19 = 1513389386U;
unsigned char var_20 = (unsigned char)11;
short var_21 = (short)24310;
unsigned char var_22 = (unsigned char)129;
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
