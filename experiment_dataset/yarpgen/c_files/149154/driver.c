#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)393;
_Bool var_5 = (_Bool)1;
short var_7 = (short)8908;
int zero = 0;
signed char var_16 = (signed char)-50;
unsigned int var_17 = 891232905U;
long long int var_18 = -6846003277977469436LL;
unsigned int var_19 = 3671812424U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
