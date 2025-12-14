#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28001;
signed char var_1 = (signed char)-55;
unsigned long long int var_2 = 17574332402758627748ULL;
unsigned short var_3 = (unsigned short)14104;
unsigned char var_4 = (unsigned char)8;
unsigned long long int var_5 = 7781445152654941420ULL;
unsigned short var_6 = (unsigned short)19100;
signed char var_7 = (signed char)-119;
unsigned long long int var_8 = 13651210729330837608ULL;
unsigned short var_9 = (unsigned short)32592;
signed char var_10 = (signed char)13;
unsigned char var_11 = (unsigned char)89;
unsigned long long int var_12 = 2941455071362214190ULL;
int zero = 0;
unsigned long long int var_13 = 6824012767673165417ULL;
short var_14 = (short)24716;
signed char var_15 = (signed char)-69;
short var_16 = (short)26167;
short var_17 = (short)4046;
unsigned char var_18 = (unsigned char)191;
short var_19 = (short)-479;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)245;
short var_22 = (short)-3349;
unsigned char var_23 = (unsigned char)221;
short var_24 = (short)16996;
short var_25 = (short)-10799;
short var_26 = (short)-2619;
short var_27 = (short)4235;
signed char var_28 = (signed char)56;
long long int var_29 = -6309550862515808731LL;
signed char var_30 = (signed char)90;
unsigned char var_31 = (unsigned char)138;
unsigned short var_32 = (unsigned short)453;
short var_33 = (short)-31690;
unsigned long long int var_34 = 10821435379502245396ULL;
short var_35 = (short)-8159;
signed char var_36 = (signed char)-12;
short arr_1 [23] ;
unsigned long long int arr_3 [23] ;
short arr_4 [23] ;
_Bool arr_10 [23] [23] ;
unsigned short arr_12 [23] ;
unsigned long long int arr_18 [23] [23] [23] [23] ;
signed char arr_19 [23] ;
short arr_25 [23] ;
short arr_6 [23] [23] ;
unsigned short arr_7 [23] [23] ;
signed char arr_20 [23] [23] [23] [23] ;
unsigned long long int arr_21 [23] ;
long long int arr_29 [23] [23] ;
long long int arr_34 [23] [23] [23] ;
_Bool arr_37 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-12751;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1556629187413961620ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-8634;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)58399;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 9848788400636234346ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)109 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (short)-4120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-20327;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)6839;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)29 : (signed char)28;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 14513895670487062415ULL : 10063831525290603684ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 7199745724769411398LL : 3893005461296630653LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2335679936453373909LL : 8128181170243203172LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
