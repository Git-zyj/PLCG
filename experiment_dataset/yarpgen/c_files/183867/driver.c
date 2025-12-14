#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2721675990528486597LL;
short var_1 = (short)-12906;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 1711281828745905599ULL;
unsigned int var_4 = 181798998U;
short var_5 = (short)-6975;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6507430535126675021ULL;
unsigned short var_9 = (unsigned short)20255;
unsigned int var_10 = 1382164654U;
short var_12 = (short)-29108;
long long int var_14 = -7643588246182663023LL;
unsigned long long int var_15 = 13676105711875930563ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)20919;
short var_17 = (short)18370;
int var_18 = -1126861696;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)205;
unsigned int var_21 = 1784781957U;
signed char var_22 = (signed char)-6;
unsigned int var_23 = 2811431805U;
int var_24 = -54762867;
short var_25 = (short)5245;
long long int var_26 = 5532057360446026031LL;
unsigned int var_27 = 1657595334U;
short var_28 = (short)-18557;
short var_29 = (short)27150;
unsigned short var_30 = (unsigned short)38354;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)-93;
short var_33 = (short)24010;
int var_34 = -867950703;
unsigned long long int var_35 = 12911440294002531098ULL;
_Bool arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned int arr_3 [10] ;
_Bool arr_5 [10] ;
signed char arr_7 [10] [10] ;
int arr_11 [13] [13] ;
signed char arr_12 [13] ;
unsigned long long int arr_13 [13] ;
int arr_14 [13] ;
long long int arr_17 [13] ;
short arr_9 [10] [10] [10] ;
long long int arr_15 [13] ;
unsigned int arr_16 [13] ;
long long int arr_19 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)59139;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3029077451U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = -2035022630;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 9643482026026955545ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 919158926;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -2998575277151867482LL : 8284065914595528456LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-15120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -7535293287653804468LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 2686806066U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? -2454137118328889722LL : 3690508629116386723LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
