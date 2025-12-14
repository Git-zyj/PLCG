#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-67;
unsigned int var_3 = 1941909726U;
unsigned int var_5 = 2489384054U;
unsigned int var_9 = 791890970U;
signed char var_10 = (signed char)43;
int zero = 0;
short var_11 = (short)16849;
unsigned char var_12 = (unsigned char)106;
unsigned short var_13 = (unsigned short)47938;
unsigned char var_14 = (unsigned char)22;
unsigned int var_15 = 185670677U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
