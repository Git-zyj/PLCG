#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 695023236U;
unsigned char var_2 = (unsigned char)137;
unsigned long long int var_3 = 16824545650819360942ULL;
unsigned char var_4 = (unsigned char)96;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 9866806976686508523ULL;
long long int var_10 = -7498260633180656496LL;
unsigned int var_11 = 943333825U;
unsigned long long int var_12 = 12703741434415765385ULL;
unsigned short var_13 = (unsigned short)27966;
unsigned char var_14 = (unsigned char)67;
signed char var_15 = (signed char)78;
unsigned char var_17 = (unsigned char)179;
long long int var_18 = 8738974344971763893LL;
unsigned char var_19 = (unsigned char)48;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8532813786933381653LL;
long long int var_22 = 2128402401980463429LL;
unsigned char var_23 = (unsigned char)248;
unsigned char var_24 = (unsigned char)153;
int var_25 = -904619593;
unsigned short var_26 = (unsigned short)10708;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)198;
long long int var_29 = 6448461797697895535LL;
int var_30 = -799594193;
unsigned char var_31 = (unsigned char)124;
int var_32 = 926603736;
unsigned long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
signed char arr_2 [13] ;
long long int arr_4 [13] ;
unsigned int arr_6 [13] [13] ;
int arr_9 [13] ;
unsigned int arr_12 [13] [13] [13] ;
_Bool arr_14 [13] [13] ;
unsigned long long int arr_16 [13] [13] [13] [13] ;
unsigned char arr_19 [13] [13] [13] ;
unsigned long long int arr_24 [13] [13] [13] ;
unsigned long long int arr_27 [21] ;
int arr_28 [21] ;
_Bool arr_30 [21] ;
int arr_31 [21] ;
signed char arr_37 [20] [20] [20] ;
_Bool arr_38 [20] ;
_Bool arr_3 [13] [13] ;
unsigned long long int arr_7 [13] [13] ;
_Bool arr_17 [13] [13] [13] [13] ;
signed char arr_18 [13] ;
unsigned char arr_25 [13] ;
long long int arr_26 [13] ;
unsigned int arr_29 [21] ;
short arr_32 [21] [21] ;
long long int arr_33 [21] [21] ;
_Bool arr_39 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 18054534485584742197ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -1835858730767576835LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 1722669682U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 417285233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2525881659U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 409623836991969448ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 2656122210890330032ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 11104153691169142523ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = 313581718;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = 1737804049;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 15321784718785360991ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)12 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)140 : (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = 1206685419775950203LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = 2321048143U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)27403 : (short)-26793;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? -1488089956342184996LL : -2027325359069938657LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
