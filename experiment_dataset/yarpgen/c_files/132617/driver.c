#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23500;
unsigned char var_1 = (unsigned char)51;
signed char var_5 = (signed char)77;
signed char var_9 = (signed char)127;
unsigned long long int var_11 = 908435166200629703ULL;
signed char var_12 = (signed char)64;
int var_13 = -1338077477;
unsigned short var_14 = (unsigned short)49167;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 3304818773997592576ULL;
unsigned int var_18 = 2126706888U;
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
