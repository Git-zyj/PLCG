#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
short var_1 = (short)26162;
_Bool var_2 = (_Bool)0;
int var_3 = 1315075864;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)40743;
int var_6 = 439523584;
unsigned int var_7 = 1812380824U;
long long int var_8 = -487531978783578546LL;
int var_9 = -757269435;
int zero = 0;
int var_10 = 653316931;
unsigned short var_11 = (unsigned short)56606;
unsigned short var_12 = (unsigned short)38527;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5148886816342173893ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
