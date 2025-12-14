#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-2;
unsigned short var_9 = (unsigned short)61009;
unsigned int var_10 = 4270166932U;
short var_11 = (short)-2917;
_Bool var_14 = (_Bool)1;
short var_15 = (short)23637;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 1530348976;
unsigned int var_21 = 442384280U;
unsigned char var_22 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
