#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8170036755017706957LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)2965;
unsigned char var_9 = (unsigned char)100;
unsigned short var_10 = (unsigned short)56541;
signed char var_12 = (signed char)126;
int var_13 = -1303820161;
int zero = 0;
unsigned long long int var_16 = 13028771995639241025ULL;
long long int var_17 = 6033002152328433727LL;
unsigned char var_18 = (unsigned char)124;
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
