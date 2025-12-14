#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -47062237;
signed char var_1 = (signed char)-93;
unsigned long long int var_4 = 9434317211776138674ULL;
int var_5 = 987783658;
int var_6 = -1474478523;
signed char var_7 = (signed char)-6;
signed char var_11 = (signed char)124;
signed char var_14 = (signed char)123;
unsigned char var_15 = (unsigned char)167;
int zero = 0;
unsigned long long int var_16 = 12396191673726041341ULL;
short var_17 = (short)18276;
int var_18 = -1674869064;
void init() {
}

void checksum() {
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
