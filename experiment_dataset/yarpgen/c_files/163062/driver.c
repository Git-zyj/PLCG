#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1887832412033636472LL;
int var_1 = 1754517366;
long long int var_3 = 2294472586997645947LL;
unsigned int var_4 = 3230972983U;
int var_7 = 604905780;
unsigned char var_8 = (unsigned char)87;
int var_9 = -2004188179;
unsigned short var_10 = (unsigned short)64277;
int zero = 0;
unsigned long long int var_12 = 18436015587492242706ULL;
unsigned char var_13 = (unsigned char)116;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)18859;
int var_16 = 624463164;
unsigned short var_17 = (unsigned short)39628;
int var_18 = 12940863;
signed char var_19 = (signed char)108;
signed char var_20 = (signed char)78;
unsigned short var_21 = (unsigned short)54551;
unsigned short var_22 = (unsigned short)32689;
signed char var_23 = (signed char)58;
short var_24 = (short)28649;
_Bool var_25 = (_Bool)0;
short arr_1 [24] [24] ;
unsigned short arr_5 [24] [24] ;
short arr_6 [24] [24] [24] ;
unsigned short arr_11 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)10988;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)64570 : (unsigned short)63576;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)11521;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)20263 : (unsigned short)30363;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
