#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22893;
int var_1 = -480641462;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-117;
signed char var_5 = (signed char)124;
unsigned int var_6 = 631886268U;
unsigned int var_7 = 372457395U;
unsigned int var_11 = 109967317U;
long long int var_12 = -7012001619879538762LL;
int zero = 0;
long long int var_14 = 3661059505877950065LL;
unsigned int var_15 = 3509757475U;
unsigned int var_16 = 2669300062U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
