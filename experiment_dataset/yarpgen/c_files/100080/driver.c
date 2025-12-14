#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19584;
unsigned short var_3 = (unsigned short)24779;
unsigned short var_4 = (unsigned short)25302;
unsigned char var_5 = (unsigned char)47;
signed char var_9 = (signed char)-98;
unsigned int var_10 = 1084867972U;
unsigned char var_11 = (unsigned char)242;
int zero = 0;
unsigned char var_12 = (unsigned char)224;
int var_13 = 1414227193;
_Bool var_14 = (_Bool)1;
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
