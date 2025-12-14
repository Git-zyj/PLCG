#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3395181167U;
signed char var_1 = (signed char)86;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 2148726655606129172ULL;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1520189384U;
signed char var_19 = (signed char)124;
unsigned long long int var_20 = 11984763064594689957ULL;
unsigned int var_21 = 3354212582U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
