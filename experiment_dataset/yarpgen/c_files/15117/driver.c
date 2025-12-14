#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 864408073;
unsigned short var_3 = (unsigned short)64681;
_Bool var_6 = (_Bool)0;
long long int var_7 = 3147733285650410692LL;
unsigned long long int var_8 = 11249068279313271364ULL;
signed char var_10 = (signed char)-95;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)51171;
_Bool var_13 = (_Bool)1;
long long int var_14 = -657482647811676735LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
