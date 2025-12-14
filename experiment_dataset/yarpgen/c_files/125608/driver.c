#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2659695287755070211LL;
unsigned short var_1 = (unsigned short)37906;
unsigned char var_2 = (unsigned char)5;
unsigned short var_4 = (unsigned short)9225;
unsigned long long int var_5 = 14852153162357699473ULL;
unsigned short var_6 = (unsigned short)20777;
signed char var_7 = (signed char)-21;
int var_9 = -200897354;
unsigned char var_10 = (unsigned char)144;
unsigned char var_11 = (unsigned char)121;
unsigned long long int var_12 = 15421014097598234340ULL;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
signed char var_15 = (signed char)64;
unsigned long long int var_16 = 6542917326151561248ULL;
int var_17 = -1190994922;
_Bool var_18 = (_Bool)0;
int var_19 = -931967024;
long long int var_20 = 8083925448675622599LL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)121;
unsigned char var_23 = (unsigned char)177;
long long int var_24 = 3677998246915511661LL;
unsigned int var_25 = 1431197859U;
unsigned int var_26 = 3239303080U;
int var_27 = 869325727;
unsigned int var_28 = 557271610U;
unsigned short var_29 = (unsigned short)47489;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 978955972U;
unsigned char var_32 = (unsigned char)0;
_Bool var_33 = (_Bool)1;
long long int var_34 = -4550551779330588004LL;
long long int var_35 = 5657498334758114785LL;
unsigned int var_36 = 2993670695U;
unsigned long long int var_37 = 9647410745231931116ULL;
long long int var_38 = 7875186545373699079LL;
unsigned char var_39 = (unsigned char)131;
unsigned char var_40 = (unsigned char)213;
long long int var_41 = 176989772263682360LL;
unsigned short var_42 = (unsigned short)63807;
int arr_1 [14] [14] ;
unsigned int arr_4 [14] ;
long long int arr_5 [14] [14] ;
_Bool arr_8 [14] [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned int arr_10 [14] ;
int arr_12 [14] ;
signed char arr_16 [14] [14] [14] ;
int arr_19 [18] [18] ;
int arr_20 [18] [18] ;
unsigned char arr_22 [13] ;
unsigned long long int arr_51 [13] [13] [13] [13] ;
unsigned int arr_2 [14] ;
unsigned int arr_13 [14] [14] ;
unsigned char arr_17 [14] ;
unsigned int arr_18 [14] ;
int arr_21 [18] [18] ;
long long int arr_28 [13] [13] [13] ;
_Bool arr_38 [13] ;
long long int arr_45 [13] [13] ;
_Bool arr_46 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2092930177;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 3426356620U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1765898182578935672LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3621346743203942040LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 866232947U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -1889827665;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = -554106343;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = -1223662133;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)65 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4438231806277298205ULL : 4858391651059348067ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4161770610U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 21976160U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)136 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 3309909165U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = -266799870;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -7368782361293694431LL : -4893306155602955973LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? -7240778864894153683LL : -2971616286465410340LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
