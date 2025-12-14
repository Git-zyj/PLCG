#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)230;
long long int var_4 = -6107412125560480830LL;
unsigned char var_5 = (unsigned char)181;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17115928097076114708ULL;
short var_8 = (short)-1377;
signed char var_12 = (signed char)51;
unsigned long long int var_13 = 13369936023907634674ULL;
unsigned short var_16 = (unsigned short)16463;
int zero = 0;
unsigned char var_17 = (unsigned char)81;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int var_20 = 2117503368;
unsigned int var_21 = 1932213974U;
short var_22 = (short)-31246;
_Bool arr_2 [23] ;
unsigned int arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1289075908U : 1956357407U;
}

void checksum() {
    hash(&seed, var_17);
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
