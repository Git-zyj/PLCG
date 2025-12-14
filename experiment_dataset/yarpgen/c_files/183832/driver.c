#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2804515387U;
unsigned int var_2 = 3271123192U;
signed char var_3 = (signed char)67;
unsigned long long int var_4 = 5761387003352999807ULL;
short var_5 = (short)-6416;
_Bool var_6 = (_Bool)1;
short var_7 = (short)11930;
short var_8 = (short)9791;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)44;
signed char var_11 = (signed char)50;
unsigned int var_12 = 822369469U;
unsigned int var_13 = 315231534U;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)94;
unsigned long long int var_16 = 17516811391930237011ULL;
signed char var_17 = (signed char)93;
short var_18 = (short)27830;
int var_19 = -386842089;
_Bool var_20 = (_Bool)0;
int var_21 = 1734103577;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)116;
short var_24 = (short)31537;
unsigned int var_25 = 3581764962U;
long long int var_26 = 5766173845594448140LL;
unsigned int var_27 = 1512393161U;
signed char var_28 = (signed char)108;
_Bool arr_0 [10] ;
_Bool arr_1 [10] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)32341;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
