#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13814402179676592302ULL;
unsigned char var_1 = (unsigned char)158;
signed char var_2 = (signed char)-73;
unsigned char var_3 = (unsigned char)160;
unsigned char var_4 = (unsigned char)193;
unsigned char var_5 = (unsigned char)231;
unsigned short var_6 = (unsigned short)22374;
long long int var_7 = -8253730038090658104LL;
long long int var_8 = 900922338555464805LL;
unsigned char var_9 = (unsigned char)136;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)58;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)29891;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)186;
unsigned short var_17 = (unsigned short)2781;
int zero = 0;
unsigned int var_18 = 3242815181U;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)252;
unsigned int var_21 = 129727930U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)223;
unsigned int var_24 = 2921535569U;
unsigned char var_25 = (unsigned char)128;
signed char var_26 = (signed char)-99;
unsigned int var_27 = 2360413409U;
signed char var_28 = (signed char)-76;
unsigned char var_29 = (unsigned char)180;
long long int var_30 = 5141626473452872358LL;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)136;
unsigned long long int var_33 = 14149359535766550477ULL;
_Bool var_34 = (_Bool)1;
unsigned char arr_0 [19] ;
signed char arr_1 [19] ;
_Bool arr_2 [19] ;
unsigned long long int arr_4 [19] [19] [19] ;
unsigned char arr_5 [19] ;
_Bool arr_6 [19] [19] [19] [19] ;
long long int arr_7 [19] [19] [19] ;
unsigned char arr_11 [19] [19] [19] [19] [19] ;
unsigned char arr_14 [19] ;
_Bool arr_15 [19] ;
long long int arr_18 [19] [19] [19] [19] ;
unsigned int arr_29 [19] [19] [19] ;
unsigned long long int arr_30 [19] [19] [19] ;
unsigned long long int arr_38 [19] [19] [19] [19] ;
unsigned int arr_13 [19] [19] [19] [19] [19] ;
unsigned long long int arr_23 [19] [19] [19] [19] ;
long long int arr_31 [19] [19] ;
unsigned int arr_43 [13] ;
signed char arr_44 [13] ;
_Bool arr_45 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5745879637515892439ULL : 11465684332233086839ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -7456884428927444658LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)171 : (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3662646281836155239LL : -7210933405970403428LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2181039966U : 1882379470U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 11593564508973809205ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 13824019264339163683ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 2844258015U : 3386580933U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3877398496985985903ULL : 154855311984498664ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? -6257686448314607387LL : 2068429556352759667LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = 1080566839U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_44 [i_0] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_45 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
