#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned int var_2 = 100301804U;
unsigned short var_4 = (unsigned short)50456;
unsigned long long int var_5 = 18095819033912586315ULL;
unsigned int var_7 = 2676234580U;
long long int var_9 = 1756839825573327385LL;
signed char var_11 = (signed char)114;
short var_12 = (short)-7439;
int zero = 0;
signed char var_13 = (signed char)37;
unsigned int var_14 = 4185973065U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-844;
signed char var_17 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
