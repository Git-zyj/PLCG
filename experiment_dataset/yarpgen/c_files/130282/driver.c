#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8385;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)48353;
unsigned char var_13 = (unsigned char)41;
long long int var_14 = 3812935533400487991LL;
signed char var_17 = (signed char)125;
int zero = 0;
int var_19 = -353064507;
signed char var_20 = (signed char)75;
int var_21 = 1998135614;
short var_22 = (short)22493;
unsigned short var_23 = (unsigned short)46378;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
