#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34789;
unsigned short var_4 = (unsigned short)7194;
unsigned int var_5 = 511022858U;
unsigned short var_6 = (unsigned short)20536;
unsigned int var_7 = 1384269997U;
unsigned short var_11 = (unsigned short)63546;
unsigned int var_13 = 1408219679U;
unsigned int var_16 = 3032691835U;
unsigned char var_17 = (unsigned char)127;
int zero = 0;
long long int var_20 = -3269120035770700034LL;
unsigned short var_21 = (unsigned short)43188;
signed char var_22 = (signed char)-8;
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
