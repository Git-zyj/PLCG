#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1357902915U;
unsigned short var_1 = (unsigned short)4416;
unsigned short var_2 = (unsigned short)47187;
short var_3 = (short)-19366;
signed char var_4 = (signed char)-58;
unsigned long long int var_5 = 1356225623580525767ULL;
signed char var_6 = (signed char)-92;
signed char var_7 = (signed char)64;
unsigned char var_8 = (unsigned char)76;
signed char var_9 = (signed char)-98;
unsigned long long int var_10 = 308125952323093223ULL;
unsigned int var_11 = 3241113492U;
int var_12 = 1045999053;
unsigned short var_13 = (unsigned short)32639;
int zero = 0;
short var_14 = (short)32440;
unsigned char var_15 = (unsigned char)183;
unsigned int var_16 = 1349002154U;
signed char var_17 = (signed char)-76;
int var_18 = 796795918;
unsigned char var_19 = (unsigned char)129;
unsigned long long int var_20 = 6632412484166180042ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1778664471U;
long long int var_23 = 2567356009775601028LL;
unsigned char var_24 = (unsigned char)55;
int var_25 = -1827926720;
unsigned short var_26 = (unsigned short)8478;
short var_27 = (short)-21760;
short var_28 = (short)-4751;
unsigned int var_29 = 2937072377U;
short var_30 = (short)5068;
short var_31 = (short)-15062;
short var_32 = (short)13719;
unsigned short arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
unsigned long long int arr_7 [12] ;
short arr_9 [12] [12] [12] [12] [12] [12] ;
int arr_10 [12] [12] [12] [12] ;
signed char arr_12 [12] ;
unsigned char arr_14 [12] [12] [12] [12] ;
unsigned char arr_19 [18] [18] ;
unsigned char arr_23 [18] [18] [18] ;
long long int arr_24 [18] ;
short arr_5 [12] [12] ;
unsigned int arr_18 [12] ;
unsigned int arr_21 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55000;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 8478150582770666343ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12617448838535309228ULL : 4381038327304790611ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 6481596715012754160ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (short)3023 : (short)-11083;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 923155479;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)82 : (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = 360294025262764943LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)21665 : (short)-22394;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1180560266U : 1965207573U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 742013138U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
