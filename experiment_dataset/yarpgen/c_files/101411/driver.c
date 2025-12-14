#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28655;
unsigned char var_7 = (unsigned char)149;
signed char var_14 = (signed char)-105;
unsigned short var_19 = (unsigned short)62833;
int zero = 0;
signed char var_20 = (signed char)12;
unsigned int var_21 = 385104707U;
long long int var_22 = 8965127087387549957LL;
_Bool var_23 = (_Bool)1;
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
