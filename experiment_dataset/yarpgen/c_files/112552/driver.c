#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7607086737136058328LL;
int var_1 = -1590597190;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)218;
unsigned int var_4 = 366122952U;
long long int var_5 = -3900505811241242355LL;
unsigned short var_6 = (unsigned short)14271;
unsigned char var_9 = (unsigned char)200;
long long int var_12 = 2475827429194395873LL;
unsigned int var_13 = 740586206U;
int var_15 = -747795263;
unsigned short var_16 = (unsigned short)38562;
int zero = 0;
unsigned int var_17 = 157954193U;
long long int var_18 = 3884925796199294411LL;
long long int var_19 = 666485540071080864LL;
long long int var_20 = 4994976892197011311LL;
unsigned char var_21 = (unsigned char)47;
unsigned int var_22 = 3730007734U;
unsigned int var_23 = 1843561144U;
_Bool var_24 = (_Bool)0;
long long int var_25 = 4231457559730577412LL;
unsigned int var_26 = 1482139637U;
unsigned int var_27 = 2866271126U;
int var_28 = -1201300863;
long long int arr_0 [12] ;
unsigned int arr_2 [12] ;
unsigned short arr_3 [19] ;
unsigned char arr_5 [19] ;
unsigned int arr_7 [19] ;
unsigned int arr_20 [19] [19] [19] [19] ;
long long int arr_21 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_9 [19] [19] ;
signed char arr_23 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2538746355404126510LL : -4727891150270762134LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 969798238U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)29990;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2845770325U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 2302764613U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -7087173082042873805LL : 1436722463780999937LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-102 : (signed char)56;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
