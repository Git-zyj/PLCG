#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12446;
signed char var_3 = (signed char)-9;
short var_4 = (short)31617;
signed char var_6 = (signed char)119;
int var_7 = 1276930401;
int zero = 0;
short var_12 = (short)25134;
unsigned int var_13 = 1488310666U;
long long int var_14 = -6219509664786914336LL;
unsigned int var_15 = 3862231560U;
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
