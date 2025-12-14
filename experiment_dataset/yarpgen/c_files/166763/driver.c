#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18756;
int var_2 = 1247695273;
short var_4 = (short)-31;
int var_5 = 1432930848;
unsigned long long int var_6 = 15366053530156339706ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
short var_13 = (short)1829;
unsigned int var_14 = 1476161708U;
short var_15 = (short)19933;
void init() {
}

void checksum() {
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
