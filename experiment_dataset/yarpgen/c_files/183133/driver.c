#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1345735485;
_Bool var_2 = (_Bool)1;
int var_6 = 954086633;
unsigned int var_7 = 186376258U;
int var_8 = 200753794;
short var_9 = (short)14848;
int var_10 = -1765617379;
int zero = 0;
long long int var_15 = -4163658761354527405LL;
unsigned int var_16 = 1685900361U;
short var_17 = (short)22457;
unsigned int var_18 = 1104327401U;
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
