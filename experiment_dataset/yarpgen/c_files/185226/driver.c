#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 897990776;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)34186;
unsigned short var_4 = (unsigned short)377;
unsigned char var_5 = (unsigned char)64;
short var_6 = (short)3062;
short var_7 = (short)-3988;
unsigned long long int var_8 = 7140584245647648900ULL;
short var_9 = (short)22537;
unsigned int var_10 = 3464706579U;
signed char var_11 = (signed char)-64;
unsigned char var_13 = (unsigned char)92;
signed char var_15 = (signed char)89;
unsigned char var_16 = (unsigned char)100;
short var_17 = (short)-28358;
short var_18 = (short)7833;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)19899;
unsigned char var_21 = (unsigned char)89;
unsigned long long int var_22 = 5309960862234409548ULL;
long long int var_23 = -5784308005065896841LL;
int var_24 = -1932674889;
unsigned long long int var_25 = 14103701679220165626ULL;
int var_26 = 1714308742;
short var_27 = (short)31111;
signed char arr_0 [19] [19] ;
_Bool arr_5 [19] [19] ;
unsigned int arr_7 [22] ;
unsigned short arr_8 [22] [22] ;
unsigned long long int arr_2 [19] ;
long long int arr_6 [19] [19] ;
unsigned int arr_9 [22] [22] ;
int arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2727561854U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)34819;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 15583059713462692490ULL : 15484584497881717463ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 5166076874446289823LL : 5313395747261869750LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1932719033U : 1609093108U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -413089310 : -1157587670;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
