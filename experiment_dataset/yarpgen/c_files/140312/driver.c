#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 584940885046512031ULL;
unsigned int var_4 = 3653545584U;
signed char var_5 = (signed char)34;
signed char var_6 = (signed char)-112;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-13939;
unsigned char var_10 = (unsigned char)80;
int zero = 0;
short var_11 = (short)12998;
_Bool var_12 = (_Bool)1;
long long int var_13 = 784644154791841218LL;
unsigned long long int var_14 = 7959921180294307035ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
