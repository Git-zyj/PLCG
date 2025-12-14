#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57906;
unsigned short var_2 = (unsigned short)8942;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)25835;
short var_8 = (short)7064;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)20529;
short var_13 = (short)-31430;
unsigned short var_14 = (unsigned short)37308;
unsigned char var_15 = (unsigned char)57;
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
