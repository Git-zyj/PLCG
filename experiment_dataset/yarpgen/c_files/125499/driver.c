#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -392128097740794254LL;
_Bool var_4 = (_Bool)1;
int var_6 = -988347302;
unsigned int var_8 = 2353140123U;
short var_9 = (short)-22215;
unsigned int var_13 = 1231633936U;
long long int var_18 = 1108058348487214367LL;
int zero = 0;
int var_19 = 533410906;
unsigned long long int var_20 = 8532429015408813871ULL;
int var_21 = -1330530304;
unsigned int var_22 = 2813388727U;
signed char var_23 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
