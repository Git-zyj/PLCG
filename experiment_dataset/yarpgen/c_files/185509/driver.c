#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59938;
int var_3 = 1069373847;
int var_4 = 1269488050;
unsigned short var_6 = (unsigned short)18777;
signed char var_10 = (signed char)113;
int var_11 = 1243912939;
int zero = 0;
short var_12 = (short)-18955;
int var_13 = -218277377;
unsigned short var_14 = (unsigned short)57674;
signed char var_15 = (signed char)-58;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
