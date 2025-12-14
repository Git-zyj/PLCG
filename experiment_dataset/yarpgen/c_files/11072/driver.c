#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_10 = (unsigned short)495;
signed char var_11 = (signed char)64;
short var_12 = (short)8496;
unsigned short var_13 = (unsigned short)43864;
long long int var_14 = -1330894092727428447LL;
short var_15 = (short)-14010;
short var_16 = (short)-23180;
unsigned long long int var_17 = 7939818378980354352ULL;
unsigned long long int var_18 = 15251419457397559331ULL;
short var_19 = (short)885;
long long int var_20 = 744508663157196010LL;
long long int var_21 = -7794334048204201802LL;
long long int var_22 = 4755647274023181665LL;
short var_23 = (short)-19489;
unsigned int var_24 = 3874720615U;
long long int var_25 = 7789666597741419459LL;
unsigned short var_26 = (unsigned short)8601;
long long int var_27 = 290272033212418634LL;
int var_28 = -1234597081;
_Bool arr_0 [19] ;
long long int arr_1 [19] ;
short arr_2 [19] [19] [19] ;
unsigned short arr_3 [19] [19] ;
int arr_5 [19] ;
long long int arr_6 [19] [19] ;
signed char arr_8 [19] [19] [19] ;
unsigned short arr_9 [19] [19] [19] ;
long long int arr_10 [19] [19] [19] ;
signed char arr_11 [19] [19] ;
int arr_12 [19] [19] [19] ;
unsigned char arr_13 [19] [19] ;
int arr_14 [19] [19] [19] ;
unsigned long long int arr_17 [19] [19] ;
short arr_18 [19] [19] [19] [19] ;
_Bool arr_19 [19] [19] [19] [19] ;
int arr_20 [19] [19] [19] [19] ;
long long int arr_23 [19] [19] ;
int arr_24 [19] [19] [19] ;
signed char arr_27 [19] [19] [19] [19] ;
long long int arr_28 [19] ;
unsigned short arr_16 [19] ;
unsigned char arr_21 [19] [19] [19] ;
int arr_22 [19] [19] ;
int arr_25 [19] [19] ;
short arr_26 [19] [19] [19] ;
signed char arr_29 [19] ;
unsigned short arr_30 [19] [19] [19] [19] ;
unsigned int arr_34 [19] [19] [19] [19] [19] [19] ;
short arr_37 [19] [19] [19] [19] ;
_Bool arr_40 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3693353040403392695LL : -3216827578304544791LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)12920;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23490 : (unsigned short)55101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1137030642 : 5674615;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 390872372593080750LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)80 : (signed char)-69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)4308 : (unsigned short)9300;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -990977064907258007LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-94 : (signed char)-110;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1584523806;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -165108722 : 2075521040;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 12206729299598012365ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)-29889;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 253360073;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = -4467175867396476682LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -1247847186;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-22 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? -6296152611169290262LL : 5754439103849955859LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17498 : (unsigned short)1019;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)51 : (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 852702775 : -2019947784;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 210434471 : -2009847198;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)8208 : (short)13278;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)15206 : (unsigned short)26679;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 364566761U : 3427750601U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)25024 : (short)-19540;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
