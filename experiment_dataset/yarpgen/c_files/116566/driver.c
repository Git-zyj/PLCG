#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16939506525353470934ULL;
int var_1 = -2116398230;
short var_2 = (short)-30036;
short var_3 = (short)-8601;
unsigned char var_4 = (unsigned char)131;
unsigned int var_5 = 3012124892U;
unsigned long long int var_6 = 14784190970503605458ULL;
int var_7 = -1069076472;
unsigned int var_8 = 3881878398U;
signed char var_9 = (signed char)44;
unsigned int var_10 = 464763118U;
unsigned long long int var_11 = 17255418041737095816ULL;
long long int var_12 = 3340000706488500952LL;
unsigned short var_14 = (unsigned short)38975;
int zero = 0;
unsigned short var_15 = (unsigned short)40867;
signed char var_16 = (signed char)11;
unsigned long long int var_17 = 11237036378026022596ULL;
unsigned int var_18 = 1945579028U;
long long int var_19 = -6836386434095118340LL;
short var_20 = (short)-13884;
unsigned long long int var_21 = 9407275540289435589ULL;
unsigned int var_22 = 3266115208U;
long long int var_23 = -1226188236117100448LL;
unsigned int var_24 = 70687905U;
unsigned long long int var_25 = 4365732020755862471ULL;
short var_26 = (short)26978;
int var_27 = 668288991;
unsigned int var_28 = 3366202434U;
int var_29 = -668206746;
unsigned long long int var_30 = 2273840765023807011ULL;
unsigned short var_31 = (unsigned short)64301;
signed char var_32 = (signed char)18;
unsigned char arr_0 [22] ;
_Bool arr_3 [22] ;
unsigned short arr_4 [22] ;
unsigned long long int arr_6 [25] [25] ;
unsigned short arr_7 [25] ;
int arr_8 [25] ;
unsigned short arr_9 [25] [25] [25] ;
unsigned long long int arr_10 [25] [25] [25] ;
short arr_13 [25] ;
signed char arr_14 [25] [25] [25] [25] ;
unsigned short arr_15 [25] [25] [25] [25] [25] [25] ;
signed char arr_16 [25] [25] [25] [25] ;
unsigned int arr_18 [25] [25] [25] [25] [25] ;
signed char arr_20 [25] [25] ;
unsigned long long int arr_21 [25] ;
long long int arr_25 [25] [25] ;
unsigned long long int arr_32 [10] [10] [10] ;
int arr_39 [10] ;
short arr_5 [22] ;
unsigned char arr_11 [25] ;
unsigned short arr_19 [25] [25] [25] ;
unsigned long long int arr_26 [25] ;
unsigned int arr_27 [25] ;
unsigned short arr_30 [10] ;
int arr_31 [10] ;
unsigned short arr_36 [10] [10] ;
unsigned long long int arr_41 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)6323;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 5598266681778910028ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)32951;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 1395945139;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)12298;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 14682419666180450742ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)12922 : (short)5345;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)62127 : (unsigned short)14690;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 1015277922U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 9753629047330525854ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = 7129156182368084806LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5974672555412777ULL : 3472314237736648437ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = 1426817709;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-29517;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)88 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)29190 : (unsigned short)48026;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = 5356712335017910268ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = 1185422242U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (unsigned short)54839;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = 923826612;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33407 : (unsigned short)58377;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = 1985822249511316193ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
