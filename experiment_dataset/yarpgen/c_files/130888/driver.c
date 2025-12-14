#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54335;
long long int var_5 = -6138669666844092144LL;
unsigned short var_6 = (unsigned short)2404;
int var_7 = 1365741734;
unsigned short var_8 = (unsigned short)15848;
signed char var_9 = (signed char)-47;
long long int var_11 = 5759219810446110792LL;
long long int var_12 = -5786567109890928967LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)50;
long long int var_20 = 607155606093254181LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)10167;
unsigned char var_23 = (unsigned char)35;
signed char var_24 = (signed char)81;
unsigned short var_25 = (unsigned short)16202;
signed char var_26 = (signed char)-17;
unsigned short var_27 = (unsigned short)40671;
_Bool arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned short arr_3 [24] ;
signed char arr_6 [17] ;
short arr_7 [17] ;
unsigned short arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -7096769534920238492LL : -1066163692717236976LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)29781;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)23861;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)8217;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
