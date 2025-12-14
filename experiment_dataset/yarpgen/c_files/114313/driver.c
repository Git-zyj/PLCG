#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64307;
unsigned char var_4 = (unsigned char)91;
unsigned short var_5 = (unsigned short)55199;
unsigned short var_6 = (unsigned short)59340;
int var_9 = -658528555;
int zero = 0;
signed char var_10 = (signed char)-87;
unsigned short var_11 = (unsigned short)58697;
unsigned int var_12 = 2832842038U;
int var_13 = 854281116;
short var_14 = (short)16251;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
