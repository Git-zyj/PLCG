#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
long long int var_3 = 1271701698236555294LL;
unsigned short var_6 = (unsigned short)14213;
unsigned char var_10 = (unsigned char)83;
int zero = 0;
short var_11 = (short)5014;
unsigned int var_12 = 2447086065U;
long long int var_13 = -8694522416354639402LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
