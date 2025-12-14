#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
long long int var_2 = -6003121392382064827LL;
unsigned short var_3 = (unsigned short)19322;
unsigned char var_4 = (unsigned char)222;
unsigned long long int var_5 = 10339599107625267968ULL;
unsigned long long int var_7 = 17249494743017624763ULL;
int var_11 = -1227914995;
unsigned int var_12 = 3936338589U;
unsigned char var_13 = (unsigned char)94;
unsigned char var_15 = (unsigned char)44;
long long int var_16 = -1404908608939374919LL;
int zero = 0;
unsigned int var_17 = 1218362691U;
long long int var_18 = 7839852818665938558LL;
unsigned char var_19 = (unsigned char)109;
unsigned char var_20 = (unsigned char)107;
unsigned long long int var_21 = 4151637904012115559ULL;
unsigned char var_22 = (unsigned char)75;
unsigned char var_23 = (unsigned char)93;
unsigned int var_24 = 2416539281U;
int var_25 = 883984797;
long long int var_26 = -5977624636613724454LL;
unsigned int var_27 = 1883437284U;
unsigned short var_28 = (unsigned short)36368;
long long int var_29 = 6510601712766832001LL;
int var_30 = 63108494;
unsigned char var_31 = (unsigned char)222;
unsigned char var_32 = (unsigned char)86;
int var_33 = 159739323;
unsigned char var_34 = (unsigned char)88;
unsigned long long int var_35 = 13723742453006467753ULL;
unsigned long long int var_36 = 5970895396168627474ULL;
unsigned long long int var_37 = 14094168978427075072ULL;
long long int var_38 = 1975364382679645375LL;
unsigned char arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
long long int arr_3 [19] ;
unsigned int arr_5 [19] [19] [19] ;
int arr_6 [19] [19] ;
int arr_8 [19] [19] [19] ;
signed char arr_9 [19] [19] [19] [19] ;
long long int arr_10 [19] [19] [19] ;
unsigned long long int arr_11 [19] [19] [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] [19] ;
unsigned long long int arr_15 [19] [19] ;
unsigned long long int arr_16 [19] ;
unsigned int arr_17 [19] [19] [19] [19] [19] [19] ;
long long int arr_19 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 4160117780967593385ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 16327907337843989752ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2884660679412808843LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4144804143U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 644717445;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -301596079;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -427146656549103902LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 5577291659318534202ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 7905875609939170995ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 17012433797161986293ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 10766446643406413454ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 909885190U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -6007115450982386622LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
