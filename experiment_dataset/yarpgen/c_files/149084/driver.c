#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1453911894U;
long long int var_3 = -8162707892459669433LL;
unsigned short var_4 = (unsigned short)33078;
unsigned short var_8 = (unsigned short)44319;
int var_13 = 970580659;
int zero = 0;
int var_14 = -437300248;
unsigned short var_15 = (unsigned short)4843;
long long int var_16 = 947551865247566375LL;
int var_17 = -679119666;
signed char var_18 = (signed char)94;
unsigned short var_19 = (unsigned short)17054;
unsigned short var_20 = (unsigned short)61655;
signed char var_21 = (signed char)48;
int var_22 = -363960088;
short arr_5 [17] ;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)7542;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
