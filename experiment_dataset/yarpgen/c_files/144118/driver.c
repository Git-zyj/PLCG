#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 699450547;
unsigned short var_7 = (unsigned short)42615;
unsigned long long int var_9 = 2906907744613350246ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2629347142U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)74;
int var_16 = -1969474314;
unsigned short var_17 = (unsigned short)64716;
unsigned short var_18 = (unsigned short)5612;
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
