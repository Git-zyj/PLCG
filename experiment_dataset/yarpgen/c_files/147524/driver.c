#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27951;
signed char var_3 = (signed char)97;
unsigned char var_6 = (unsigned char)177;
unsigned char var_8 = (unsigned char)238;
long long int var_9 = 5069431408743038787LL;
long long int var_11 = -5307610111194739948LL;
long long int var_12 = -4715043166427304918LL;
signed char var_13 = (signed char)100;
signed char var_14 = (signed char)11;
long long int var_16 = -6189951104195235524LL;
int zero = 0;
signed char var_18 = (signed char)71;
short var_19 = (short)4049;
unsigned char var_20 = (unsigned char)64;
long long int var_21 = -346759769129348560LL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)16956;
long long int var_24 = 2120642009224968613LL;
long long int var_25 = -497828203869562950LL;
long long int var_26 = 9038296052359489625LL;
unsigned char var_27 = (unsigned char)225;
long long int var_28 = 2617898548299889824LL;
unsigned char var_29 = (unsigned char)57;
long long int var_30 = -5030944468604778308LL;
short var_31 = (short)20393;
unsigned char var_32 = (unsigned char)226;
short var_33 = (short)29630;
_Bool var_34 = (_Bool)0;
int var_35 = 1436154295;
long long int var_36 = 5859666632896886486LL;
_Bool var_37 = (_Bool)0;
unsigned char arr_0 [24] ;
_Bool arr_1 [24] [24] ;
unsigned short arr_4 [24] ;
unsigned short arr_7 [24] ;
long long int arr_8 [24] [24] [24] ;
long long int arr_10 [22] ;
signed char arr_11 [22] [22] ;
short arr_12 [22] [22] [22] ;
unsigned long long int arr_19 [22] [22] [22] [22] ;
int arr_2 [24] ;
short arr_9 [24] [24] [24] ;
unsigned char arr_14 [22] [22] ;
long long int arr_15 [22] ;
long long int arr_24 [22] [22] [22] [22] [22] ;
unsigned short arr_25 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)28347;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)56001;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -3130134439988346584LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 4697096328249845300LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-5319;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 5256770396483482708ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1159965100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-14117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 7605685600226017854LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 6956357215563413114LL : -7337057381330074421LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20122 : (unsigned short)2390;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
