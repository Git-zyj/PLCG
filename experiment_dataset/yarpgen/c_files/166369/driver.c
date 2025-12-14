#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6418924916544386648LL;
unsigned short var_2 = (unsigned short)47204;
short var_5 = (short)10490;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)12;
signed char var_13 = (signed char)10;
int var_15 = -1675501497;
unsigned int var_17 = 2306485493U;
int zero = 0;
short var_20 = (short)14174;
signed char var_21 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
