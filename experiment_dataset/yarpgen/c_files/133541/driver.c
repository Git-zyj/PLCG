#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9142626866766812246LL;
signed char var_1 = (signed char)-106;
unsigned long long int var_2 = 11938894207173314965ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)76;
long long int var_9 = -1422159790561012447LL;
unsigned long long int var_10 = 205885306818810404ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 130110712;
signed char var_15 = (signed char)-31;
int zero = 0;
unsigned long long int var_17 = 14731939046186823417ULL;
unsigned char var_18 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
