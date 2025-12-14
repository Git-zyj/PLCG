#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19054;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)15569;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)10382;
int var_17 = -958336126;
int zero = 0;
unsigned int var_19 = 4285195016U;
short var_20 = (short)14044;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
