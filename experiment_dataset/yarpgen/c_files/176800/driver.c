#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1222;
signed char var_7 = (signed char)-123;
short var_8 = (short)-26344;
unsigned short var_10 = (unsigned short)25297;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1630426861;
short var_13 = (short)-28088;
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
