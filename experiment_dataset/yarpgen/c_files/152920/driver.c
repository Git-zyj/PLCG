#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6303242612680878336LL;
unsigned int var_2 = 3077284712U;
unsigned int var_9 = 3066859321U;
unsigned char var_10 = (unsigned char)230;
unsigned short var_12 = (unsigned short)45505;
long long int var_15 = -7521873897675670582LL;
int zero = 0;
unsigned long long int var_16 = 3218279052291660561ULL;
unsigned long long int var_17 = 3733207620960847175ULL;
int var_18 = 242504493;
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
