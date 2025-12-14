#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)11;
long long int var_4 = -3571723239648432187LL;
signed char var_5 = (signed char)-102;
unsigned char var_7 = (unsigned char)226;
unsigned short var_9 = (unsigned short)38364;
unsigned char var_10 = (unsigned char)166;
short var_12 = (short)5440;
unsigned long long int var_13 = 1475735122393843398ULL;
unsigned int var_14 = 2547596297U;
int zero = 0;
int var_15 = 1686778291;
long long int var_16 = 1922379746691306224LL;
unsigned long long int var_17 = 10401248651866194276ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)32366;
long long int var_21 = -3642463888175750442LL;
long long int var_22 = -5168176408186200536LL;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 4187215931U;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)92;
unsigned long long int var_27 = 4427047659276987022ULL;
long long int var_28 = -2071524240146116979LL;
unsigned long long int var_29 = 17057151457207013138ULL;
signed char var_30 = (signed char)-70;
unsigned long long int var_31 = 14150031379660962252ULL;
short var_32 = (short)-4909;
unsigned short var_33 = (unsigned short)61968;
unsigned short var_34 = (unsigned short)31409;
signed char var_35 = (signed char)-53;
int var_36 = -1860969090;
signed char var_37 = (signed char)-112;
unsigned char var_38 = (unsigned char)244;
unsigned long long int var_39 = 4019746604125775336ULL;
short var_40 = (short)-1857;
long long int var_41 = 3766727769554087720LL;
short var_42 = (short)-17833;
short var_43 = (short)965;
unsigned short var_44 = (unsigned short)63232;
unsigned short var_45 = (unsigned short)9008;
unsigned char var_46 = (unsigned char)5;
signed char arr_1 [11] [11] ;
long long int arr_4 [11] [11] [11] [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
short arr_7 [11] [11] ;
unsigned int arr_8 [11] [11] [11] ;
_Bool arr_13 [24] [24] ;
unsigned short arr_14 [24] [24] ;
signed char arr_15 [24] [24] ;
unsigned long long int arr_16 [24] ;
signed char arr_17 [24] [24] [24] ;
short arr_18 [24] [24] ;
unsigned int arr_19 [24] [24] ;
unsigned long long int arr_22 [17] [17] ;
long long int arr_23 [24] ;
unsigned char arr_29 [24] [24] ;
signed char arr_30 [24] [24] ;
unsigned short arr_32 [24] ;
int arr_38 [25] [25] ;
unsigned char arr_43 [25] [25] [25] ;
long long int arr_46 [25] [25] [25] [25] ;
unsigned char arr_57 [25] [25] ;
signed char arr_6 [11] ;
int arr_9 [11] [11] [11] ;
int arr_20 [24] [24] ;
unsigned long long int arr_28 [24] [24] [24] ;
signed char arr_33 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 8738498016834024054LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 9086837021099852517ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-18783;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1071500223U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)13145;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 9191025630046264201ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (short)24299;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = 317378369U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = 11208157772213959695ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -8657203297788815969LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)3 : (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-121 : (signed char)-111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (unsigned short)11751;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = -1370324551;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 9125096759090413178LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_57 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1561864790;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = -123705199;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1359795757429771931ULL : 12084661866356816015ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (signed char)-90 : (signed char)-31;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
