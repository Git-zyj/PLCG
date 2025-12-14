#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1248475406763484806LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1369581935U;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4932725522550058827LL;
signed char var_5 = (signed char)40;
signed char var_6 = (signed char)37;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)87;
unsigned long long int var_9 = 4430220825332440233ULL;
unsigned int var_10 = 2020857706U;
short var_11 = (short)-8945;
signed char var_12 = (signed char)20;
int zero = 0;
unsigned long long int var_13 = 5673871187612386092ULL;
unsigned int var_14 = 613392634U;
long long int var_15 = 1102348799341327858LL;
unsigned int var_16 = 269359367U;
long long int var_17 = 784259929627543685LL;
long long int var_18 = 1374947391609940956LL;
unsigned long long int var_19 = 7214420426283930404ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 67148078U;
short var_22 = (short)28133;
unsigned long long int var_23 = 10507010690123497328ULL;
short var_24 = (short)3181;
long long int var_25 = 2400464279512369099LL;
short var_26 = (short)-18409;
long long int var_27 = -3943515912452457988LL;
int var_28 = -545117444;
int var_29 = -298390320;
signed char var_30 = (signed char)24;
unsigned long long int arr_0 [21] ;
short arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
signed char arr_3 [25] ;
long long int arr_5 [25] [25] ;
short arr_7 [18] ;
unsigned int arr_8 [18] ;
short arr_9 [18] [18] ;
long long int arr_14 [18] [18] ;
long long int arr_29 [18] [18] [18] [18] ;
signed char arr_12 [18] [18] ;
unsigned int arr_19 [18] [18] ;
_Bool arr_30 [18] [18] [18] ;
long long int arr_31 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7753304029746653752ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)20333;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2617438593U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 7478886901337611584LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)17564;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2640596997U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-4615;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? -2100939641472120341LL : 6456186732201717317LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2354818088365446704LL : -5669827602114799220LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 3189551400U : 416684541U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = 4076208403515947197LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
