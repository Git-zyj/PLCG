#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-104;
short var_5 = (short)25021;
int var_6 = 327674692;
unsigned short var_8 = (unsigned short)56618;
int var_10 = 1403399002;
unsigned short var_11 = (unsigned short)3836;
unsigned char var_12 = (unsigned char)40;
int zero = 0;
int var_14 = 1597781813;
signed char var_15 = (signed char)101;
void init() {
}

void checksum() {
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
