#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1217178302U;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3661023750U;
long long int var_10 = -2446034544119820952LL;
unsigned int var_15 = 183724717U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5438909176773222581LL;
int zero = 0;
long long int var_19 = 1479867669290492809LL;
unsigned int var_20 = 919673974U;
signed char var_21 = (signed char)30;
signed char var_22 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
