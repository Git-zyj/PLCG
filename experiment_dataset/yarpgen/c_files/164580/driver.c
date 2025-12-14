#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
unsigned long long int var_1 = 10686815828885470395ULL;
unsigned char var_2 = (unsigned char)66;
unsigned char var_4 = (unsigned char)64;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)51;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)10;
int var_10 = 1957853799;
int var_11 = 948868812;
signed char var_12 = (signed char)75;
unsigned char var_14 = (unsigned char)66;
signed char var_15 = (signed char)127;
signed char var_16 = (signed char)-48;
int zero = 0;
unsigned long long int var_17 = 18013341219533759288ULL;
signed char var_18 = (signed char)-29;
long long int var_19 = -4896243871898832999LL;
int var_20 = -2139608855;
long long int var_21 = -8045929587397340550LL;
long long int var_22 = 7370037226790767914LL;
signed char var_23 = (signed char)-90;
_Bool var_24 = (_Bool)0;
long long int var_25 = 5745543264130699358LL;
signed char var_26 = (signed char)14;
signed char var_27 = (signed char)-123;
int var_28 = -1316018525;
long long int var_29 = 1726503985595801348LL;
long long int var_30 = -3774633389501309809LL;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 7611077745211920243ULL;
unsigned char arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_2 [17] ;
long long int arr_5 [17] [17] ;
signed char arr_6 [17] [17] [17] [17] ;
_Bool arr_7 [17] [17] [17] ;
signed char arr_8 [17] [17] [17] [17] ;
long long int arr_10 [17] [17] ;
long long int arr_11 [17] [17] ;
int arr_13 [17] ;
signed char arr_15 [17] [17] [17] ;
int arr_18 [17] [17] [17] ;
signed char arr_19 [17] [17] ;
long long int arr_9 [17] [17] [17] ;
long long int arr_21 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 16060097074144448450ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -9119757019629855413LL : -1424286113143121630LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-15 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = -8857315221231495710LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = -8935039883835237977LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -74956032 : 1915602490;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -2020119531;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3059089403378365963LL : -7443727584154196903LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1010596022554035395LL : -7153446330149032098LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
