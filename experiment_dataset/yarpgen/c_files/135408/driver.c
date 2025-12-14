#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)55;
int var_10 = 705909481;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-29129;
unsigned int var_13 = 466592238U;
signed char var_14 = (signed char)-68;
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
