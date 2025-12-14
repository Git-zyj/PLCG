#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28018;
unsigned char var_1 = (unsigned char)116;
int var_2 = 734285873;
unsigned short var_3 = (unsigned short)8936;
short var_4 = (short)-2620;
signed char var_5 = (signed char)-115;
short var_6 = (short)-1137;
signed char var_7 = (signed char)-98;
unsigned short var_8 = (unsigned short)5869;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 6612204942045384884ULL;
unsigned char var_11 = (unsigned char)127;
int var_12 = -1184252217;
int var_14 = 662320948;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-114;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5667898267635461719LL;
int var_19 = 1897950856;
int var_20 = -777438894;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)115;
unsigned char var_23 = (unsigned char)180;
unsigned int var_24 = 98774002U;
short var_25 = (short)19436;
unsigned short var_26 = (unsigned short)35874;
long long int var_27 = 2999704414581046239LL;
short var_28 = (short)21148;
int var_29 = -140487475;
unsigned long long int var_30 = 1116302880849905360ULL;
unsigned short arr_5 [19] ;
unsigned char arr_12 [19] [19] [19] ;
int arr_22 [19] [19] [19] [19] ;
signed char arr_30 [19] [19] [19] ;
long long int arr_31 [19] ;
int arr_32 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)16944;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)174 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -450713271;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = -9134789967495644893LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = 663105386;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
