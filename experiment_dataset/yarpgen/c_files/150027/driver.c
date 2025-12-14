#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 123412172;
int var_1 = 647111776;
int var_3 = 665872979;
long long int var_6 = 4564201391345404612LL;
short var_7 = (short)-28365;
unsigned int var_10 = 279177758U;
int var_13 = -2112792434;
unsigned short var_15 = (unsigned short)14002;
unsigned short var_16 = (unsigned short)61637;
short var_17 = (short)5844;
int zero = 0;
int var_18 = -1497868584;
unsigned char var_19 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
