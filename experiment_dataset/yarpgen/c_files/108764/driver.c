#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 639501657;
int var_3 = -1103359313;
int var_8 = -117828230;
int var_9 = 68022922;
unsigned short var_11 = (unsigned short)44746;
unsigned int var_12 = 811790412U;
long long int var_13 = -2632650717099055377LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1008499645789583512LL;
int var_16 = 158870036;
int zero = 0;
int var_18 = -2031705547;
int var_19 = 1636370438;
long long int var_20 = 7802762445786865882LL;
long long int var_21 = -5685866301709033258LL;
unsigned int var_22 = 3514067714U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
