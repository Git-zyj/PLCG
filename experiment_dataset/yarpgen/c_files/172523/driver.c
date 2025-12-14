#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14952;
unsigned long long int var_4 = 9545589227962187380ULL;
unsigned long long int var_5 = 118801185070638019ULL;
unsigned long long int var_6 = 5964296697194070191ULL;
unsigned long long int var_7 = 11340435339899856426ULL;
long long int var_11 = 1796646255079250607LL;
signed char var_12 = (signed char)-93;
int zero = 0;
unsigned long long int var_17 = 5772731977285885673ULL;
long long int var_18 = -2794801598026922764LL;
short var_19 = (short)10885;
unsigned char var_20 = (unsigned char)93;
signed char var_21 = (signed char)-7;
long long int var_22 = 6711864865253615695LL;
short var_23 = (short)-28863;
long long int var_24 = -4810192123862540256LL;
unsigned long long int var_25 = 9316544924330947483ULL;
long long int var_26 = 6029825317706415907LL;
unsigned short var_27 = (unsigned short)27836;
unsigned int var_28 = 2428041238U;
long long int var_29 = -8793272019302963284LL;
long long int var_30 = 5024157496819242335LL;
signed char var_31 = (signed char)-126;
short var_32 = (short)-4556;
unsigned char var_33 = (unsigned char)243;
unsigned char var_34 = (unsigned char)128;
unsigned int var_35 = 461311993U;
unsigned char var_36 = (unsigned char)46;
unsigned long long int var_37 = 9314396665576140695ULL;
long long int var_38 = -3514146035451614610LL;
unsigned long long int var_39 = 6107261651495801401ULL;
unsigned short var_40 = (unsigned short)63865;
unsigned long long int var_41 = 6317629304947327130ULL;
long long int var_42 = 7594416086619201014LL;
long long int var_43 = -7169839465037607197LL;
short var_44 = (short)5991;
long long int arr_4 [11] [11] ;
unsigned long long int arr_9 [14] [14] ;
_Bool arr_10 [14] [14] ;
_Bool arr_12 [14] ;
unsigned char arr_17 [21] [21] ;
int arr_18 [21] ;
_Bool arr_20 [21] [21] ;
long long int arr_23 [21] [21] [21] [21] ;
unsigned char arr_24 [21] [21] [21] ;
unsigned char arr_32 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 3953833311417146547LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 15155399307314975540ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = -166591467;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1250166655994604066LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)15;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
