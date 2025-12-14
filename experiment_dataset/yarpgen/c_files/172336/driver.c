#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4013;
_Bool var_5 = (_Bool)0;
short var_6 = (short)6505;
unsigned char var_8 = (unsigned char)46;
unsigned char var_9 = (unsigned char)139;
int zero = 0;
unsigned int var_11 = 3388497022U;
short var_12 = (short)13850;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
