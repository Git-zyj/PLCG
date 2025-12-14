#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
long long int var_5 = -3761962229415058161LL;
short var_7 = (short)4568;
int var_8 = 394685665;
int var_11 = -496248872;
unsigned short var_12 = (unsigned short)51752;
int zero = 0;
unsigned short var_18 = (unsigned short)37763;
signed char var_19 = (signed char)-9;
short var_20 = (short)1380;
unsigned short var_21 = (unsigned short)42285;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
