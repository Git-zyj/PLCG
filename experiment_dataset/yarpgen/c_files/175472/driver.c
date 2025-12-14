#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50089;
signed char var_2 = (signed char)-97;
unsigned int var_5 = 3540274618U;
unsigned char var_10 = (unsigned char)203;
short var_13 = (short)15677;
unsigned long long int var_14 = 1871762117657849542ULL;
signed char var_15 = (signed char)-104;
int zero = 0;
signed char var_16 = (signed char)-42;
signed char var_17 = (signed char)72;
unsigned short var_18 = (unsigned short)11393;
unsigned char var_19 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
