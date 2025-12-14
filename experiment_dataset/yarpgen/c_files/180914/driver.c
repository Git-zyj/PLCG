#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1638285536629873664LL;
unsigned int var_3 = 4237955830U;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1572990634551495195LL;
unsigned short var_7 = (unsigned short)16769;
signed char var_9 = (signed char)43;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 16819270486816286020ULL;
int zero = 0;
short var_15 = (short)3488;
unsigned short var_16 = (unsigned short)45034;
unsigned int var_17 = 839748440U;
unsigned int var_18 = 3045774297U;
unsigned int var_19 = 2657431051U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
