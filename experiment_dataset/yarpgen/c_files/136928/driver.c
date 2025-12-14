#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -254594912;
short var_1 = (short)30262;
int var_2 = -838190178;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)77;
int var_9 = -1247981504;
unsigned int var_10 = 438835367U;
int zero = 0;
int var_11 = -1991723095;
int var_12 = -1231750944;
short var_13 = (short)25604;
signed char var_14 = (signed char)-77;
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
