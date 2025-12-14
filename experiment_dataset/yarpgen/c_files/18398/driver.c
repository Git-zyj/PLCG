#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1356540092;
unsigned char var_4 = (unsigned char)184;
int var_5 = 2000825106;
int var_8 = -166502772;
int var_9 = 350223372;
int var_11 = 1024183328;
int zero = 0;
int var_13 = -605074586;
int var_14 = 358618857;
short var_15 = (short)9964;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
