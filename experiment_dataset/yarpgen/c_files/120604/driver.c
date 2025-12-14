#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14684952475088508084ULL;
long long int var_5 = -8911097619908271184LL;
unsigned long long int var_6 = 11321445590993559445ULL;
unsigned short var_8 = (unsigned short)29842;
unsigned long long int var_9 = 16819963128908467560ULL;
int zero = 0;
signed char var_11 = (signed char)-99;
unsigned long long int var_12 = 152627722355542186ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15315678833500632108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
