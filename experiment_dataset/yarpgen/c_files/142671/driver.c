#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)57;
unsigned short var_2 = (unsigned short)6972;
unsigned int var_3 = 3694480963U;
long long int var_4 = 7076064925106651000LL;
short var_7 = (short)27527;
unsigned int var_8 = 3941032656U;
signed char var_10 = (signed char)-116;
int zero = 0;
unsigned short var_13 = (unsigned short)58459;
long long int var_14 = 6038582961550993007LL;
unsigned int var_15 = 3973617719U;
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
