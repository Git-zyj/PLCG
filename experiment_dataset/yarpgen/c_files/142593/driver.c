#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6110212605335428270LL;
unsigned int var_4 = 1087932267U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)261;
signed char var_7 = (signed char)77;
unsigned long long int var_9 = 16606619380835771854ULL;
int zero = 0;
unsigned long long int var_12 = 10210816548777539198ULL;
short var_13 = (short)-15639;
unsigned short var_14 = (unsigned short)6883;
signed char var_15 = (signed char)17;
void init() {
}

void checksum() {
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
