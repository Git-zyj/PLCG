#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2934413313U;
unsigned short var_4 = (unsigned short)40421;
unsigned int var_5 = 1095811U;
unsigned long long int var_8 = 3606631390865266603ULL;
unsigned int var_9 = 1823598686U;
unsigned char var_11 = (unsigned char)89;
_Bool var_13 = (_Bool)0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)98;
int zero = 0;
long long int var_19 = -2867668211876958944LL;
unsigned short var_20 = (unsigned short)30150;
unsigned long long int var_21 = 1898324288939359322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
