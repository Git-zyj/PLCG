#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2859028211U;
signed char var_1 = (signed char)104;
unsigned char var_2 = (unsigned char)65;
unsigned short var_3 = (unsigned short)26260;
unsigned char var_5 = (unsigned char)212;
_Bool var_6 = (_Bool)1;
short var_9 = (short)30107;
int zero = 0;
int var_11 = -1476433354;
short var_12 = (short)934;
_Bool var_13 = (_Bool)1;
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
