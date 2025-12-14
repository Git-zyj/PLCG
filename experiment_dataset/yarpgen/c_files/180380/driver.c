#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)20;
long long int var_6 = 1176289185813421822LL;
long long int var_9 = -754723230585235265LL;
_Bool var_11 = (_Bool)1;
long long int var_14 = 6713144936833456530LL;
unsigned long long int var_15 = 12447179396006690093ULL;
int zero = 0;
signed char var_16 = (signed char)82;
signed char var_17 = (signed char)98;
unsigned long long int var_18 = 263796283079093829ULL;
int var_19 = -348858497;
long long int var_20 = -925337129507773448LL;
signed char var_21 = (signed char)-94;
long long int var_22 = 4330209456857787662LL;
unsigned long long int var_23 = 12973773471584731044ULL;
int var_24 = 1701020037;
unsigned short var_25 = (unsigned short)62307;
unsigned long long int var_26 = 10603601546988499015ULL;
short var_27 = (short)31279;
unsigned long long int var_28 = 2201380487719055960ULL;
signed char var_29 = (signed char)-16;
signed char var_30 = (signed char)73;
int var_31 = -11483246;
_Bool var_32 = (_Bool)1;
short var_33 = (short)-15987;
long long int var_34 = 4942386256231768445LL;
unsigned short var_35 = (unsigned short)30517;
signed char var_36 = (signed char)43;
signed char var_37 = (signed char)79;
signed char arr_0 [12] ;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_3 [12] [12] ;
unsigned long long int arr_6 [12] [12] [12] [12] ;
unsigned short arr_7 [12] [12] [12] [12] ;
int arr_8 [12] [12] [12] ;
unsigned short arr_10 [25] ;
int arr_11 [25] ;
long long int arr_12 [25] [25] ;
signed char arr_17 [25] [25] ;
long long int arr_18 [25] ;
short arr_21 [25] [25] [25] ;
unsigned long long int arr_26 [25] ;
long long int arr_32 [11] [11] ;
_Bool arr_35 [11] ;
short arr_9 [12] [12] ;
unsigned long long int arr_13 [25] ;
unsigned long long int arr_14 [25] ;
long long int arr_15 [25] ;
unsigned long long int arr_25 [10] ;
unsigned long long int arr_29 [25] [25] ;
long long int arr_40 [11] ;
signed char arr_46 [11] [11] [11] ;
long long int arr_50 [11] [11] ;
unsigned short arr_51 [11] ;
unsigned short arr_52 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3355559125028947231ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 11310088951610585083ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 10492465627096687383ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2379;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1672057037;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)2077;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -1428056980;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 1821450936569156298LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = -4346051185692229962LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)10543;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 15763500610306596331ULL : 13623091731922745176ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_32 [i_0] [i_1] = -6879211274628649600LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)5577;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 13437309067004218960ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 15821079212555420362ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 4678528511737888447LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 8085705960221509177ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? 2229229272752912615ULL : 4932116060496259807ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_40 [i_0] = -4416637930908995132LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)55 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_50 [i_0] [i_1] = (i_1 % 2 == 0) ? -8578020062471543975LL : -8170131331755564617LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64162 : (unsigned short)3147;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)15802 : (unsigned short)48610;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
