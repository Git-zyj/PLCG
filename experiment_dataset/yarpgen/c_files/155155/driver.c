#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11825706694465707793ULL;
long long int var_1 = -7440325157510462782LL;
unsigned long long int var_2 = 13566642092523454567ULL;
unsigned char var_3 = (unsigned char)226;
unsigned long long int var_4 = 14693863300187787398ULL;
long long int var_5 = 2592119542265917816LL;
long long int var_6 = -4027005782022474912LL;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_14 = -2434529969694543393LL;
long long int var_15 = 7455411898384078172LL;
int zero = 0;
unsigned long long int var_16 = 16145203874758919309ULL;
long long int var_17 = -3142779819332926934LL;
unsigned long long int var_18 = 1238673860863855445ULL;
long long int var_19 = 5951988945754309723LL;
unsigned long long int var_20 = 14157296078624030489ULL;
unsigned long long int var_21 = 12067803072223011900ULL;
long long int var_22 = 642385127585446023LL;
long long int var_23 = -1859546384784066454LL;
unsigned int var_24 = 820399728U;
long long int var_25 = -5766075645832876445LL;
unsigned char var_26 = (unsigned char)250;
unsigned char var_27 = (unsigned char)245;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)250;
unsigned int var_30 = 4031119168U;
_Bool var_31 = (_Bool)0;
long long int var_32 = 7104498804379869529LL;
long long int var_33 = 6462024827007574800LL;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
unsigned int arr_2 [11] [11] ;
unsigned long long int arr_5 [11] ;
unsigned int arr_6 [11] ;
unsigned char arr_8 [11] ;
unsigned long long int arr_9 [11] ;
long long int arr_11 [15] ;
unsigned long long int arr_12 [15] ;
_Bool arr_18 [24] ;
long long int arr_4 [11] ;
unsigned int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3527767133474561863LL : 6188249794142242883LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -537668102802301133LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1541161247U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2893742354895964399ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3446944371U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 4069680995388321152ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 448817514066566357LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 6859648267098534026ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -3230709355687686871LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 993403683U : 3034816019U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
