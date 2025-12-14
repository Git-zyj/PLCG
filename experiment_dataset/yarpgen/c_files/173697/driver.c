#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24528;
int var_4 = -449017753;
unsigned short var_6 = (unsigned short)15012;
unsigned short var_7 = (unsigned short)23637;
unsigned int var_9 = 2164662240U;
unsigned int var_10 = 309165278U;
unsigned int var_12 = 1769752340U;
unsigned short var_17 = (unsigned short)13162;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 299160346U;
unsigned int var_20 = 2708781581U;
short var_21 = (short)-2868;
void init() {
}

void checksum() {
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
