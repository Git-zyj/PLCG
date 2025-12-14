#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)248;
unsigned short var_7 = (unsigned short)4883;
signed char var_11 = (signed char)59;
signed char var_12 = (signed char)23;
short var_14 = (short)1424;
short var_15 = (short)20461;
int zero = 0;
short var_16 = (short)26370;
int var_17 = 990127216;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
