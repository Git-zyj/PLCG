#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4396369264548870067LL;
unsigned short var_1 = (unsigned short)19322;
unsigned long long int var_2 = 17813938792326151945ULL;
unsigned char var_3 = (unsigned char)215;
long long int var_4 = -7481489762112753596LL;
long long int var_5 = -5182650486363544490LL;
unsigned short var_6 = (unsigned short)64032;
signed char var_7 = (signed char)-29;
unsigned int var_8 = 545890875U;
long long int var_10 = -3056302019307080618LL;
unsigned char var_11 = (unsigned char)121;
int var_12 = -1311781258;
short var_13 = (short)-11048;
int zero = 0;
unsigned long long int var_14 = 7446813337631861369ULL;
long long int var_15 = 4003851150316965248LL;
unsigned short var_16 = (unsigned short)56895;
signed char var_17 = (signed char)-110;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)67;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7262801863721941301ULL;
signed char var_22 = (signed char)-98;
long long int var_23 = 5466437891202398437LL;
long long int var_24 = 539604050261584493LL;
long long int var_25 = -7899992835598894555LL;
unsigned long long int var_26 = 14043964097290237109ULL;
long long int var_27 = 2003628999000809026LL;
signed char var_28 = (signed char)-87;
long long int var_29 = 3250878327838295350LL;
unsigned char var_30 = (unsigned char)157;
long long int var_31 = 2484028227742735639LL;
signed char var_32 = (signed char)43;
int var_33 = -264784231;
short var_34 = (short)10438;
signed char var_35 = (signed char)-29;
short var_36 = (short)28353;
long long int var_37 = -1358076450390683995LL;
long long int var_38 = -7874653523637644878LL;
short var_39 = (short)-27856;
unsigned long long int var_40 = 3057864358777590588ULL;
long long int var_41 = 8298219056831256428LL;
long long int var_42 = 6984503135226735167LL;
unsigned int arr_0 [23] ;
short arr_1 [23] [23] ;
short arr_3 [23] ;
short arr_6 [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned int arr_8 [23] ;
short arr_10 [23] ;
_Bool arr_14 [23] [23] [23] ;
_Bool arr_15 [23] ;
short arr_16 [23] [23] [23] [23] [23] ;
short arr_17 [23] [23] ;
unsigned long long int arr_18 [23] ;
unsigned long long int arr_21 [23] ;
unsigned short arr_29 [23] [23] ;
long long int arr_30 [23] [23] [23] ;
unsigned long long int arr_34 [23] [23] [23] [23] [23] [23] ;
signed char arr_36 [23] [23] ;
unsigned char arr_38 [23] ;
unsigned char arr_2 [23] [23] ;
unsigned char arr_5 [23] ;
unsigned long long int arr_9 [23] ;
signed char arr_13 [23] ;
short arr_27 [23] [23] [23] [23] ;
signed char arr_32 [23] ;
_Bool arr_33 [23] [23] ;
short arr_43 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3330279725U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19845;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-1382;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)20685;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 8091348545542203787ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1586143159U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)30637;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-19534;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-5048;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 14544660588596616595ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 1800913791095130188ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36507 : (unsigned short)11525;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -4611615340671225120LL : -4129292398134701092LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11387995509637604121ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-75 : (signed char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 15840910240465924744ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)23450 : (short)3585;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (signed char)-17 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)22042 : (short)-24108;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
