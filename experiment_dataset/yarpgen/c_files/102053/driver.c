#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1346368035U;
unsigned int var_2 = 3552997844U;
signed char var_4 = (signed char)-16;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 4055887416U;
long long int var_8 = 1079447942521363803LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -8677486137563845462LL;
short var_11 = (short)-9500;
_Bool var_12 = (_Bool)1;
short var_13 = (short)13062;
int zero = 0;
signed char var_14 = (signed char)34;
unsigned int var_15 = 3512091669U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5685254899862070888ULL;
unsigned int var_18 = 1457954235U;
unsigned long long int var_19 = 7042632794561381889ULL;
short var_20 = (short)-5711;
unsigned long long int var_21 = 11540201997197775735ULL;
short var_22 = (short)-7128;
long long int var_23 = -1969618685495898130LL;
unsigned long long int var_24 = 4175982337717452519ULL;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)35309;
short var_27 = (short)-11306;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 3079864288U;
_Bool var_31 = (_Bool)0;
short var_32 = (short)31605;
long long int var_33 = 4470588554376752417LL;
_Bool var_34 = (_Bool)1;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)51298;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
