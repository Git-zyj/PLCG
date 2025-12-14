#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 17937037732929964628ULL;
unsigned char var_6 = (unsigned char)42;
signed char var_7 = (signed char)125;
short var_8 = (short)17734;
unsigned int var_9 = 2325298322U;
int zero = 0;
unsigned int var_10 = 3192635173U;
unsigned long long int var_11 = 493629009674364780ULL;
unsigned short var_12 = (unsigned short)52966;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
