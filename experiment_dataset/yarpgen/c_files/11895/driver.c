#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)1060;
signed char var_2 = (signed char)44;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)97;
unsigned long long int var_6 = 14411954712163565921ULL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)10648;
unsigned long long int var_9 = 3319601570674689697ULL;
unsigned short var_10 = (unsigned short)27075;
unsigned char var_14 = (unsigned char)10;
unsigned short var_15 = (unsigned short)23238;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 4611163531953343126ULL;
int zero = 0;
short var_18 = (short)17619;
signed char var_19 = (signed char)76;
int var_20 = 452166816;
unsigned short var_21 = (unsigned short)20056;
signed char var_22 = (signed char)-97;
unsigned char var_23 = (unsigned char)143;
long long int var_24 = 4036291157655527500LL;
long long int var_25 = 9035122211178859667LL;
_Bool var_26 = (_Bool)0;
int var_27 = -1987636171;
signed char var_28 = (signed char)65;
short var_29 = (short)-9231;
unsigned long long int var_30 = 14525144586785384791ULL;
unsigned long long int var_31 = 15020458135691772185ULL;
int var_32 = -262932635;
int var_33 = 1363880981;
short var_34 = (short)-25705;
short var_35 = (short)24661;
unsigned char var_36 = (unsigned char)198;
_Bool var_37 = (_Bool)1;
signed char var_38 = (signed char)-77;
unsigned char var_39 = (unsigned char)77;
long long int arr_0 [23] ;
signed char arr_1 [23] ;
unsigned short arr_6 [15] ;
int arr_13 [23] ;
long long int arr_14 [23] ;
unsigned char arr_16 [23] [23] ;
long long int arr_17 [23] [23] [23] ;
unsigned long long int arr_18 [23] [23] [23] ;
unsigned char arr_19 [23] [23] ;
signed char arr_23 [23] [23] ;
signed char arr_25 [23] [23] [23] [23] ;
unsigned char arr_29 [23] ;
unsigned long long int arr_33 [23] [23] [23] ;
unsigned long long int arr_34 [23] [23] [23] ;
short arr_36 [23] [23] [23] [23] ;
_Bool arr_37 [23] [23] ;
long long int arr_39 [23] [23] ;
signed char arr_2 [23] [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_15 [23] ;
unsigned long long int arr_20 [23] [23] ;
unsigned long long int arr_21 [23] [23] ;
int arr_22 [23] ;
signed char arr_30 [23] ;
long long int arr_40 [23] ;
signed char arr_41 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -1703811389939445563LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)-20;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)21937;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 1544134660;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -5940176301680968952LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -1971265365823170015LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 7228711333397447697ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 1208417342328063810ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 16035531778930762001ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (short)-9665;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_37 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_39 [i_0] [i_1] = 5162087759365138189LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-35 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6697494252712796119ULL : 10400672782589275245ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 18138045380415566766ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = 14080737727418866172ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 1737872190;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (signed char)-22 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = 7464861227215710242LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_41 [i_0] [i_1] = (signed char)(-127 - 1);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
