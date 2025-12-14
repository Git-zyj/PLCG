#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)41;
unsigned short var_3 = (unsigned short)4214;
unsigned char var_7 = (unsigned char)5;
int var_12 = -1005220076;
int zero = 0;
unsigned int var_13 = 1718382600U;
signed char var_14 = (signed char)-90;
void init() {
}

void checksum() {
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
