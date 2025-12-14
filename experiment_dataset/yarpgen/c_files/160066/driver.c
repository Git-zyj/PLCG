#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1413362769;
unsigned int var_4 = 1792730301U;
unsigned char var_5 = (unsigned char)184;
unsigned long long int var_6 = 3995537995369702667ULL;
signed char var_7 = (signed char)118;
int var_8 = 835710487;
short var_10 = (short)18936;
long long int var_11 = 7530061359935159687LL;
short var_12 = (short)-4567;
short var_14 = (short)-16416;
unsigned long long int var_15 = 17224241686726454471ULL;
int zero = 0;
unsigned int var_16 = 2545390480U;
int var_17 = 1471319130;
short var_18 = (short)13987;
unsigned long long int var_19 = 17228684034137813422ULL;
long long int var_20 = -2358639452168333204LL;
long long int var_21 = 4854387339888357750LL;
short var_22 = (short)17745;
short var_23 = (short)20374;
int var_24 = -1030078988;
long long int var_25 = -6620051463008714764LL;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 3981058087U;
long long int var_28 = -9207531254994205209LL;
unsigned int var_29 = 906867410U;
long long int var_30 = 3214351934166609729LL;
short var_31 = (short)-19891;
short var_32 = (short)21812;
int var_33 = -751011595;
long long int var_34 = 8629940871990421236LL;
short var_35 = (short)25989;
unsigned int var_36 = 2823219437U;
unsigned int var_37 = 2919262368U;
unsigned char var_38 = (unsigned char)140;
int var_39 = 770329421;
signed char var_40 = (signed char)38;
unsigned long long int var_41 = 9532331204166913953ULL;
unsigned int var_42 = 1942688523U;
unsigned long long int var_43 = 3689865081606343864ULL;
long long int var_44 = -9163828726658768102LL;
unsigned int var_45 = 2166672666U;
unsigned char arr_3 [24] [24] ;
int arr_4 [24] [24] ;
long long int arr_5 [24] ;
_Bool arr_6 [24] [24] [24] ;
_Bool arr_9 [24] [24] [24] ;
unsigned short arr_10 [24] ;
unsigned long long int arr_12 [24] [24] [24] [24] [24] ;
signed char arr_15 [24] ;
long long int arr_16 [24] [24] [24] [24] [24] ;
long long int arr_17 [24] [24] [24] [24] [24] ;
long long int arr_19 [24] [24] [24] ;
unsigned long long int arr_30 [24] ;
unsigned long long int arr_2 [13] ;
signed char arr_23 [24] [24] ;
_Bool arr_24 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)251 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1652360057;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 8541401067364589061LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)64095;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 14016702040974581937ULL : 3304671843411824449ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 6151277389982378605LL : 3462742791321997988LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 2103988512201883347LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 4096119748569892905LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = 12651387777059375374ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13106906548618355436ULL : 14279586424106206703ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
