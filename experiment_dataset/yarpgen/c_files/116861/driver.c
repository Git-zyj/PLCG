#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9079;
_Bool var_1 = (_Bool)0;
short var_2 = (short)9544;
unsigned long long int var_3 = 1275606428674901206ULL;
unsigned char var_4 = (unsigned char)32;
unsigned long long int var_5 = 17672665247998370475ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)51;
signed char var_8 = (signed char)80;
unsigned long long int var_9 = 13153397875732364655ULL;
unsigned int var_10 = 1865528032U;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-589;
long long int var_13 = 8986033629789201260LL;
signed char var_14 = (signed char)-111;
unsigned char var_15 = (unsigned char)163;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-68;
long long int var_18 = 7113025693250991197LL;
int var_19 = -1354977338;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2755687580U;
unsigned int var_22 = 1865500222U;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)43831;
unsigned short var_25 = (unsigned short)21179;
unsigned long long int var_26 = 7238949704593776961ULL;
long long int var_27 = -8081555271910038618LL;
int var_28 = 1013379956;
unsigned long long int var_29 = 12069438323280320496ULL;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)1;
long long int var_32 = -91343056625413561LL;
unsigned int var_33 = 4050253802U;
short arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
unsigned long long int arr_3 [14] ;
short arr_6 [14] ;
_Bool arr_11 [14] [14] [14] ;
unsigned int arr_16 [14] ;
short arr_17 [14] [14] [14] [14] ;
long long int arr_22 [25] ;
signed char arr_25 [25] ;
unsigned int arr_26 [25] ;
int arr_27 [25] ;
short arr_28 [25] [25] [25] ;
unsigned int arr_29 [25] ;
unsigned long long int arr_30 [25] [25] [25] [25] [25] ;
unsigned short arr_31 [25] [25] ;
unsigned int arr_33 [25] [25] ;
unsigned short arr_36 [25] [25] [25] ;
int arr_37 [25] ;
_Bool arr_38 [25] [25] ;
unsigned char arr_44 [25] [25] ;
unsigned short arr_46 [25] ;
unsigned long long int arr_56 [10] ;
_Bool arr_60 [10] [10] [10] ;
unsigned char arr_2 [22] ;
unsigned long long int arr_20 [14] [14] [14] [14] ;
unsigned int arr_21 [14] [14] [14] ;
short arr_24 [25] [25] ;
unsigned short arr_35 [25] [25] [25] [25] [25] [25] [25] ;
short arr_39 [25] ;
unsigned char arr_40 [25] ;
unsigned short arr_54 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-15154;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)44493;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 12596353229725198370ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)-22966;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 306513893U : 4028483555U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)17167 : (short)-29247;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = -5669468966320333264LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = 3808204549U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = -1544530696;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)10833;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 719211628U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 4874904875741139316ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)52183;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_33 [i_0] [i_1] = 2710980923U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)48294 : (unsigned short)44534;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? -884078684 : 299871896;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_44 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4590 : (unsigned short)2561;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_56 [i_0] = 4233042500139579205ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 986478189990591815ULL : 1458413578858520182ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1092479636U : 233726828U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = (short)-15862;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)28100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (short)11072 : (short)-16654;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7403 : (unsigned short)203;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_54 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
