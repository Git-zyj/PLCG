#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23787;
unsigned short var_1 = (unsigned short)26941;
int var_3 = 188530550;
long long int var_5 = -3617328978095631967LL;
short var_9 = (short)-7084;
unsigned int var_10 = 1617185882U;
int zero = 0;
unsigned short var_12 = (unsigned short)48031;
long long int var_13 = -8088569072960139834LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 674266776U;
signed char var_16 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
