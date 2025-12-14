#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
signed char var_2 = (signed char)-66;
short var_4 = (short)-9454;
unsigned char var_5 = (unsigned char)62;
unsigned char var_6 = (unsigned char)23;
signed char var_7 = (signed char)-110;
unsigned short var_8 = (unsigned short)13053;
unsigned char var_9 = (unsigned char)215;
long long int var_10 = 500389689249586204LL;
signed char var_11 = (signed char)-83;
unsigned char var_12 = (unsigned char)178;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
signed char var_18 = (signed char)28;
int zero = 0;
unsigned short var_19 = (unsigned short)46121;
signed char var_20 = (signed char)-91;
unsigned int var_21 = 916866254U;
short var_22 = (short)22924;
long long int var_23 = 950616100266195654LL;
long long int var_24 = 7131003128562592333LL;
unsigned int var_25 = 1953009154U;
long long int var_26 = 2659718281254278295LL;
int var_27 = -885423162;
short var_28 = (short)-22755;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)14126;
long long int var_31 = -4379480362404272045LL;
short var_32 = (short)-11947;
unsigned char var_33 = (unsigned char)172;
unsigned short var_34 = (unsigned short)9939;
signed char var_35 = (signed char)96;
signed char var_36 = (signed char)113;
unsigned long long int var_37 = 5350330203907213727ULL;
unsigned short var_38 = (unsigned short)8664;
unsigned int var_39 = 893036943U;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_3 [11] ;
unsigned char arr_5 [17] ;
unsigned short arr_6 [17] [17] ;
signed char arr_10 [17] [17] ;
short arr_11 [17] [17] [17] ;
unsigned long long int arr_16 [17] ;
long long int arr_21 [25] [25] ;
signed char arr_7 [17] ;
unsigned long long int arr_8 [17] ;
signed char arr_13 [17] [17] ;
unsigned int arr_14 [17] [17] [17] ;
unsigned short arr_18 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 8082161461170664088ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 11141210705848286184ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)26253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-10615;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 13078422607308590273ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = -7971966450654045701LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 4042351121251355823ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 297905541U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)32346;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
