#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1883538036;
unsigned short var_4 = (unsigned short)15341;
int var_5 = 1555716824;
unsigned int var_7 = 3292512623U;
unsigned char var_9 = (unsigned char)183;
int var_10 = -1823826816;
int var_12 = 460806237;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)39762;
unsigned int var_18 = 3723931136U;
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
