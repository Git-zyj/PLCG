#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52596;
unsigned char var_8 = (unsigned char)90;
signed char var_9 = (signed char)-113;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-8;
short var_14 = (short)30173;
int var_15 = 1824081069;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
