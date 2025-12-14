#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1935175529U;
short var_1 = (short)6557;
int var_2 = 711059200;
long long int var_3 = 7452161547991556079LL;
int var_4 = -2061187730;
unsigned short var_5 = (unsigned short)17616;
int var_6 = 2130118625;
unsigned long long int var_7 = 5956534524538170622ULL;
short var_8 = (short)9806;
int var_10 = -183426589;
signed char var_11 = (signed char)-47;
int var_12 = -1413419428;
int var_13 = 714969261;
unsigned int var_14 = 850722355U;
int var_15 = 558423355;
int zero = 0;
signed char var_16 = (signed char)86;
long long int var_17 = -6018512535750777405LL;
unsigned short var_18 = (unsigned short)42728;
unsigned short var_19 = (unsigned short)46491;
long long int var_20 = -1534318743048415210LL;
short var_21 = (short)-12366;
short var_22 = (short)5050;
unsigned char var_23 = (unsigned char)1;
long long int var_24 = -3024838111892508481LL;
signed char var_25 = (signed char)55;
long long int var_26 = 8249349820257394606LL;
unsigned short var_27 = (unsigned short)45385;
unsigned short var_28 = (unsigned short)270;
short arr_4 [11] ;
unsigned int arr_5 [11] ;
signed char arr_7 [11] [11] ;
short arr_9 [11] [11] [11] [11] ;
int arr_20 [22] ;
unsigned int arr_21 [22] ;
short arr_25 [22] [22] [22] ;
short arr_26 [22] [22] ;
_Bool arr_27 [22] [22] [22] ;
int arr_28 [22] [22] ;
long long int arr_2 [10] [10] ;
unsigned int arr_10 [11] [11] [11] [11] ;
short arr_31 [22] [22] [22] [22] [22] ;
short arr_32 [22] [22] [22] [22] [22] ;
long long int arr_33 [22] ;
int arr_34 [22] ;
int arr_35 [22] ;
int arr_38 [22] [22] ;
unsigned short arr_39 [22] ;
long long int arr_44 [25] [25] [25] ;
long long int arr_45 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-16777;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 209598707U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-10897;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = -1425374412;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 3590417147U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)12480;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = (short)9618;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = 217720031;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -4136403347969791425LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 4108049269U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)9888;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-24217;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = -1939539025003355233LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = -192320390;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = 540527792;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = 707672017;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = (unsigned short)25213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 4750062573706759621LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_45 [i_0] [i_1] = 7446476465562231850LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
