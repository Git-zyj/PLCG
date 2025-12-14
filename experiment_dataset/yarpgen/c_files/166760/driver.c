#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
signed char var_2 = (signed char)-64;
unsigned short var_3 = (unsigned short)47803;
int var_4 = -1678862479;
int var_6 = 1555075810;
short var_10 = (short)27997;
int var_11 = -576780015;
signed char var_12 = (signed char)-67;
int zero = 0;
unsigned char var_13 = (unsigned char)216;
unsigned short var_14 = (unsigned short)46497;
unsigned short var_15 = (unsigned short)14913;
unsigned int var_16 = 2281146107U;
int var_17 = -1247960232;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
