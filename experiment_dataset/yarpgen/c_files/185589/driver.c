#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1208818505U;
unsigned long long int var_4 = 11468212379110082131ULL;
unsigned short var_6 = (unsigned short)58352;
unsigned char var_11 = (unsigned char)113;
long long int var_15 = -2111063407987686693LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-73;
short var_22 = (short)-8786;
unsigned short var_23 = (unsigned short)53955;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
