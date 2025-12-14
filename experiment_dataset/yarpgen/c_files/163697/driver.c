#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)5;
unsigned short var_7 = (unsigned short)27739;
unsigned short var_9 = (unsigned short)9066;
_Bool var_11 = (_Bool)1;
short var_12 = (short)2215;
unsigned int var_13 = 1265713365U;
int var_17 = 1769195487;
unsigned short var_19 = (unsigned short)44356;
int zero = 0;
signed char var_20 = (signed char)1;
unsigned short var_21 = (unsigned short)36786;
int var_22 = 712140051;
void init() {
}

void checksum() {
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
