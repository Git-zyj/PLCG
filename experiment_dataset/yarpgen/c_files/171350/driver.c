#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8354;
short var_1 = (short)-20573;
unsigned char var_4 = (unsigned char)28;
_Bool var_5 = (_Bool)1;
short var_6 = (short)32735;
unsigned short var_8 = (unsigned short)21734;
int zero = 0;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)101;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
