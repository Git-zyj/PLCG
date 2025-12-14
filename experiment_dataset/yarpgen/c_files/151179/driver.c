#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18837;
unsigned char var_3 = (unsigned char)180;
signed char var_4 = (signed char)5;
unsigned int var_5 = 2577912944U;
short var_9 = (short)14686;
_Bool var_12 = (_Bool)1;
int var_15 = -75345448;
long long int var_16 = -7954280964890931139LL;
short var_17 = (short)6604;
int zero = 0;
int var_20 = 1869986776;
signed char var_21 = (signed char)114;
int var_22 = 478318842;
long long int var_23 = 4003008406777680758LL;
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
