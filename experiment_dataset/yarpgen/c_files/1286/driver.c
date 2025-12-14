#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6361347705271658870ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1946483387U;
_Bool var_6 = (_Bool)1;
long long int var_9 = 2505525649640981957LL;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)90;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 11478018925227213802ULL;
int zero = 0;
unsigned int var_20 = 617273631U;
unsigned short var_21 = (unsigned short)56596;
unsigned short var_22 = (unsigned short)40756;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
