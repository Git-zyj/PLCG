#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1082765213U;
unsigned char var_7 = (unsigned char)183;
unsigned int var_8 = 1265176040U;
int zero = 0;
unsigned int var_12 = 4201510626U;
unsigned short var_13 = (unsigned short)60954;
int var_14 = 430643162;
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
