#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29093;
unsigned char var_1 = (unsigned char)33;
unsigned char var_2 = (unsigned char)37;
unsigned int var_3 = 4128726025U;
unsigned short var_4 = (unsigned short)30239;
short var_5 = (short)-188;
unsigned short var_6 = (unsigned short)27179;
unsigned long long int var_7 = 14853812836675071332ULL;
unsigned int var_8 = 1420394546U;
unsigned short var_9 = (unsigned short)59677;
unsigned short var_10 = (unsigned short)10235;
unsigned char var_11 = (unsigned char)253;
unsigned short var_12 = (unsigned short)4475;
long long int var_13 = 350248401749639387LL;
unsigned long long int var_16 = 7329905819639898884ULL;
long long int var_17 = 7056963706151279828LL;
int zero = 0;
short var_18 = (short)28855;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12625487835849940235ULL;
short var_21 = (short)-31379;
long long int var_22 = -2575040229881666168LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)24087;
long long int var_25 = -1263852760474497883LL;
signed char var_26 = (signed char)-28;
long long int var_27 = -3244475928314650062LL;
short var_28 = (short)28213;
unsigned char var_29 = (unsigned char)151;
unsigned short var_30 = (unsigned short)41546;
unsigned long long int var_31 = 2646606168068197461ULL;
unsigned long long int var_32 = 16137073428512367645ULL;
unsigned short var_33 = (unsigned short)44271;
unsigned short var_34 = (unsigned short)18906;
unsigned long long int var_35 = 5620752424462961741ULL;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)90;
short var_38 = (short)13711;
unsigned long long int var_39 = 11926002260498038321ULL;
long long int var_40 = 3408660040365430850LL;
signed char var_41 = (signed char)-61;
unsigned char var_42 = (unsigned char)96;
int var_43 = 1846535533;
_Bool var_44 = (_Bool)0;
short var_45 = (short)-7001;
unsigned char var_46 = (unsigned char)7;
unsigned long long int var_47 = 12310519278226190341ULL;
_Bool arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
long long int arr_3 [11] [11] ;
_Bool arr_4 [11] ;
long long int arr_5 [11] ;
unsigned long long int arr_6 [11] ;
unsigned short arr_7 [11] ;
unsigned short arr_8 [11] [11] ;
unsigned long long int arr_9 [11] [11] ;
unsigned long long int arr_10 [11] ;
_Bool arr_11 [11] [11] ;
long long int arr_13 [11] [11] ;
unsigned short arr_14 [11] [11] ;
unsigned char arr_15 [11] [11] [11] [11] ;
unsigned short arr_16 [11] [11] [11] ;
_Bool arr_17 [11] [11] ;
long long int arr_18 [11] [11] [11] [11] ;
short arr_20 [11] ;
_Bool arr_22 [11] [11] ;
_Bool arr_24 [11] [11] ;
unsigned char arr_26 [11] [11] [11] [11] ;
unsigned short arr_28 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_30 [11] [11] [11] [11] [11] ;
_Bool arr_31 [11] [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_32 [11] [11] [11] [11] [11] [11] [11] ;
long long int arr_36 [11] [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_21 [11] ;
unsigned short arr_34 [11] [11] [11] [11] [11] ;
unsigned char arr_35 [11] ;
signed char arr_40 [11] [11] ;
_Bool arr_41 [11] ;
short arr_45 [11] [11] ;
_Bool arr_52 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)37516;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 2772053167027842196LL : 1126553342032079911LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -8216301498951307449LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 8622893652186375607ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)47599;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)63148;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 14084925012945830579ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 1245693681371687180ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = -3451354142159603558LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)35246;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)23685;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 8622266360156590700LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (short)-27498;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)44036;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)61960;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 3708995893747790920ULL : 8768406087129860340ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 5368135188525075830LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 5639751099834474589ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)63664 : (unsigned short)57632;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-124 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_45 [i_0] [i_1] = (short)-10461;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
