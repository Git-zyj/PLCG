#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15092764054944102332ULL;
unsigned int var_2 = 1612815895U;
unsigned int var_3 = 2618049958U;
int var_4 = 1835681111;
unsigned char var_11 = (unsigned char)39;
int zero = 0;
short var_14 = (short)20966;
unsigned int var_15 = 1735753186U;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2082246790624510220LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
