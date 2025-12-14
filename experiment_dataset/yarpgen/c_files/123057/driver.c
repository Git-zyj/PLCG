#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15561;
unsigned int var_1 = 2467315194U;
unsigned short var_3 = (unsigned short)3024;
_Bool var_6 = (_Bool)1;
int var_8 = 96740355;
unsigned short var_9 = (unsigned short)29748;
int zero = 0;
short var_10 = (short)25442;
signed char var_11 = (signed char)119;
signed char var_12 = (signed char)-109;
_Bool var_13 = (_Bool)1;
int var_14 = -109647566;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
