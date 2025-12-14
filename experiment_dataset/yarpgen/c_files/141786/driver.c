#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1050664144548247325LL;
short var_3 = (short)-2805;
unsigned short var_9 = (unsigned short)44801;
unsigned char var_14 = (unsigned char)42;
unsigned char var_16 = (unsigned char)251;
unsigned short var_18 = (unsigned short)29727;
int zero = 0;
int var_20 = 1721103019;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-56;
void init() {
}

void checksum() {
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
