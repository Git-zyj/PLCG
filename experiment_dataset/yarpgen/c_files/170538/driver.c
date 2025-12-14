#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9465217322536061743ULL;
signed char var_3 = (signed char)58;
unsigned char var_4 = (unsigned char)159;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 16883980993748688358ULL;
short var_7 = (short)10103;
signed char var_11 = (signed char)-98;
int zero = 0;
int var_12 = 1054063733;
long long int var_13 = 4311663127331766786LL;
unsigned int var_14 = 2091440913U;
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
