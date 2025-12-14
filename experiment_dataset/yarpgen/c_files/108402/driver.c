#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7076178434336119173LL;
unsigned short var_5 = (unsigned short)3539;
short var_8 = (short)26449;
signed char var_11 = (signed char)12;
unsigned short var_12 = (unsigned short)8803;
int zero = 0;
short var_14 = (short)12525;
_Bool var_15 = (_Bool)0;
int var_16 = 834611135;
void init() {
}

void checksum() {
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
