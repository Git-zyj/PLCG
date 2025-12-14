#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 129076583256462825ULL;
unsigned int var_6 = 1016925520U;
unsigned int var_7 = 998411797U;
unsigned short var_8 = (unsigned short)16168;
unsigned char var_9 = (unsigned char)121;
unsigned short var_10 = (unsigned short)44895;
short var_11 = (short)20424;
int var_12 = 206714076;
unsigned int var_13 = 3537355793U;
int zero = 0;
unsigned long long int var_15 = 4338693966890900634ULL;
int var_16 = -1365998814;
unsigned int var_17 = 280722871U;
int var_18 = 292348551;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
