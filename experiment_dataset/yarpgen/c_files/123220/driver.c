#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -965246840;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 10156085803266470306ULL;
unsigned int var_3 = 165847014U;
short var_4 = (short)14174;
signed char var_5 = (signed char)62;
int var_6 = 1606312663;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)214;
unsigned long long int var_9 = 17221060890845246881ULL;
unsigned int var_10 = 1052553379U;
unsigned short var_11 = (unsigned short)20129;
unsigned char var_12 = (unsigned char)184;
long long int var_13 = 5418328443055028970LL;
unsigned char var_14 = (unsigned char)231;
long long int var_15 = -1002891777916100542LL;
int zero = 0;
int var_16 = 1146409513;
int var_17 = 1647598738;
signed char var_18 = (signed char)16;
signed char var_19 = (signed char)25;
unsigned int var_20 = 3056677769U;
long long int var_21 = -1773732705722785440LL;
long long int var_22 = -2801617790342274061LL;
signed char var_23 = (signed char)-85;
long long int var_24 = 7591653239925539518LL;
int var_25 = 1199254830;
long long int var_26 = -9017506132342432670LL;
long long int var_27 = 3074244171836905701LL;
signed char var_28 = (signed char)58;
signed char var_29 = (signed char)-21;
unsigned long long int var_30 = 10063742145159047670ULL;
unsigned char var_31 = (unsigned char)87;
signed char var_32 = (signed char)-35;
long long int var_33 = 1325474408381702111LL;
unsigned char var_34 = (unsigned char)169;
int var_35 = 1442670599;
signed char var_36 = (signed char)28;
_Bool var_37 = (_Bool)0;
long long int var_38 = 8222753496415212015LL;
unsigned long long int var_39 = 14569370759093642514ULL;
short var_40 = (short)-23585;
unsigned long long int var_41 = 14787411691985476140ULL;
long long int arr_0 [18] [18] ;
unsigned char arr_2 [18] ;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_5 [12] ;
unsigned char arr_6 [12] ;
int arr_10 [12] [12] ;
unsigned char arr_11 [12] ;
_Bool arr_12 [12] ;
_Bool arr_14 [12] ;
unsigned short arr_15 [12] ;
signed char arr_19 [12] [12] [12] ;
int arr_20 [12] [12] [12] ;
int arr_22 [12] [12] [12] ;
unsigned char arr_24 [12] [12] [12] [12] ;
signed char arr_29 [12] [12] [12] ;
int arr_7 [12] ;
short arr_8 [12] ;
unsigned char arr_16 [12] [12] ;
int arr_27 [12] [12] ;
unsigned char arr_38 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 538277164662254186LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 9355984748546662034ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 15887300175028771580ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -1514387305 : 299986979;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned short)13982;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)127 : (signed char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1949642622 : 1582556006;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -474200783;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)186 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -1649025552;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)-3482;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)246 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? 28235019 : -438797733;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)191 : (unsigned char)207;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
