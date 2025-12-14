#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 129621620;
int var_1 = -542172642;
unsigned long long int var_2 = 7992802012827256312ULL;
unsigned int var_9 = 341627066U;
int var_11 = -535904523;
unsigned long long int var_14 = 11805726138823477543ULL;
int zero = 0;
signed char var_16 = (signed char)27;
unsigned char var_17 = (unsigned char)166;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8226888905788830732LL;
unsigned short var_21 = (unsigned short)49375;
long long int var_22 = -6151197807403520550LL;
long long int var_23 = 6193089025828642166LL;
unsigned int var_24 = 3885261460U;
short var_25 = (short)-12474;
unsigned short var_26 = (unsigned short)27592;
_Bool var_27 = (_Bool)1;
short var_28 = (short)1809;
int var_29 = -859551734;
signed char var_30 = (signed char)-98;
short var_31 = (short)18025;
unsigned char var_32 = (unsigned char)248;
_Bool var_33 = (_Bool)0;
long long int var_34 = -4625014000029548005LL;
long long int var_35 = 2600505593419152249LL;
unsigned int var_36 = 4025396072U;
unsigned char arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned int arr_3 [15] ;
int arr_7 [15] [15] ;
unsigned int arr_8 [15] [15] [15] ;
_Bool arr_9 [15] ;
unsigned long long int arr_10 [15] [15] [15] [15] [15] ;
short arr_11 [15] ;
unsigned int arr_14 [15] ;
long long int arr_18 [15] [15] [15] ;
long long int arr_19 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_22 [15] [15] [15] [15] [15] ;
_Bool arr_23 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_29 [17] [17] ;
unsigned long long int arr_30 [17] ;
int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 4229409904U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 47827958;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2471679556U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 10362982294954693293ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)-7334;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 3114933985U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -4625156034862234418LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1427631190245433063LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 10345563981009493560ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_29 [i_0] [i_1] = 68136435U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = 1397954389790084237ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 613238551;
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
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
