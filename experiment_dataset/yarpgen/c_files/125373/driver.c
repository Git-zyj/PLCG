#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10422541619513090551ULL;
signed char var_1 = (signed char)-93;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)50520;
signed char var_5 = (signed char)-72;
int var_10 = -1309269820;
long long int var_11 = -929996154964630885LL;
short var_13 = (short)26070;
unsigned int var_16 = 3151827884U;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)26595;
signed char var_21 = (signed char)77;
long long int var_22 = -1015016139342027783LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
