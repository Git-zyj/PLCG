#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13791851292733239556ULL;
signed char var_2 = (signed char)-31;
unsigned int var_5 = 3543146277U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 6389906914318363206ULL;
unsigned short var_11 = (unsigned short)63680;
int zero = 0;
short var_12 = (short)24525;
unsigned short var_13 = (unsigned short)45113;
short var_14 = (short)17594;
short var_15 = (short)-11637;
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
