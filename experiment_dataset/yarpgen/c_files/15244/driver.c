#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 945866135631863154ULL;
signed char var_1 = (signed char)92;
unsigned long long int var_2 = 365339958544805589ULL;
unsigned char var_3 = (unsigned char)216;
unsigned long long int var_4 = 11026815458139711193ULL;
long long int var_5 = 417242165151468792LL;
int var_6 = 1224487549;
unsigned long long int var_7 = 10284440995108702108ULL;
signed char var_8 = (signed char)-67;
unsigned long long int var_9 = 10201041278940312833ULL;
int zero = 0;
unsigned int var_10 = 3299870084U;
unsigned long long int var_11 = 1361501161456985923ULL;
long long int var_12 = 2000720550160603565LL;
unsigned long long int var_13 = 7171974305379814950ULL;
long long int var_14 = -218908346743571454LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2495114988129794170ULL;
int var_17 = -1829259525;
signed char var_18 = (signed char)120;
unsigned int var_19 = 416477831U;
unsigned long long int var_20 = 12991130309558908755ULL;
unsigned int var_21 = 1875505241U;
unsigned long long int var_22 = 3259353882937649405ULL;
unsigned short var_23 = (unsigned short)23380;
unsigned short var_24 = (unsigned short)62710;
unsigned int var_25 = 3403517598U;
signed char var_26 = (signed char)-31;
long long int var_27 = 2287529635500064999LL;
unsigned char var_28 = (unsigned char)199;
unsigned long long int var_29 = 15655927791480414610ULL;
long long int var_30 = -8442151278182900752LL;
long long int var_31 = -4497620032871335256LL;
short var_32 = (short)32009;
unsigned long long int arr_0 [15] ;
unsigned int arr_1 [15] ;
unsigned char arr_4 [15] [15] ;
signed char arr_5 [15] [15] [15] [15] ;
unsigned short arr_7 [15] [15] [15] ;
unsigned short arr_8 [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] ;
unsigned long long int arr_15 [15] [15] [15] ;
unsigned short arr_17 [15] [15] [15] [15] ;
int arr_26 [21] ;
unsigned int arr_30 [21] ;
unsigned long long int arr_31 [21] ;
int arr_32 [21] ;
unsigned long long int arr_41 [21] [21] [21] [21] [21] ;
long long int arr_2 [15] ;
long long int arr_14 [15] ;
unsigned long long int arr_24 [15] [15] [15] [15] ;
unsigned int arr_25 [15] [15] ;
unsigned short arr_28 [21] ;
unsigned int arr_44 [21] ;
long long int arr_45 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 9038734003550388741ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 780308594U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)10 : (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24128 : (unsigned short)28307;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)723;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 9362745020475294845ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 3215484650734777344ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20068;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = -675367493;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = 3723872282U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = 16309082103626384604ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = -678388143;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = 4776317641789806123ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -5936882720091616646LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -219994454018638156LL : 3937170097592305256LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 3479245195172267070ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = 174845007U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (unsigned short)44849;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 844624574U : 4277211539U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 65618869222866814LL : -7668626103124340753LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
