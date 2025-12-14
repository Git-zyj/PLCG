#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15364671613532534842ULL;
int var_5 = -1733109980;
unsigned long long int var_6 = 12094535182886419535ULL;
unsigned short var_8 = (unsigned short)54726;
short var_9 = (short)-24894;
long long int var_10 = 3650401265982357592LL;
int var_11 = 829358083;
unsigned int var_12 = 2602911671U;
long long int var_13 = -6550745138890623031LL;
unsigned long long int var_15 = 9071356972424840422ULL;
unsigned long long int var_18 = 11372530904415776291ULL;
int zero = 0;
unsigned long long int var_20 = 8019718933176241218ULL;
unsigned long long int var_21 = 10395709670137608351ULL;
unsigned long long int var_22 = 17240430632219398234ULL;
short var_23 = (short)8713;
unsigned long long int var_24 = 6693465217037453789ULL;
unsigned long long int var_25 = 8181310976425570999ULL;
long long int var_26 = 3414298357440742358LL;
long long int var_27 = -3909672249696076911LL;
unsigned short var_28 = (unsigned short)32594;
long long int arr_1 [19] ;
long long int arr_2 [19] [19] ;
signed char arr_3 [19] ;
long long int arr_4 [19] [19] [19] ;
unsigned short arr_6 [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
int arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2514470899508893518LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -3255537158619307542LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-22 : (signed char)-27;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5351739910540067112LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43861 : (unsigned short)2464;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1387207732806818921ULL : 6701840834584147836ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 95478366 : 1758808015;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
