#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned char var_1 = (unsigned char)95;
long long int var_2 = -6496867520327810960LL;
unsigned short var_3 = (unsigned short)23840;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)141;
unsigned long long int var_6 = 15812180030214678391ULL;
unsigned char var_8 = (unsigned char)65;
int var_9 = -1836725878;
unsigned long long int var_10 = 42946002045620109ULL;
int zero = 0;
unsigned long long int var_16 = 11626881885744879258ULL;
long long int var_17 = 6299069043052210702LL;
short var_18 = (short)4425;
signed char var_19 = (signed char)89;
long long int var_20 = 4103675141855259560LL;
unsigned char var_21 = (unsigned char)100;
long long int var_22 = -2446043450500522193LL;
unsigned long long int var_23 = 4747803822442176866ULL;
short var_24 = (short)-4950;
short var_25 = (short)26321;
unsigned int var_26 = 3211618283U;
unsigned long long int arr_3 [11] [11] [11] ;
short arr_5 [11] [11] [11] ;
unsigned long long int arr_7 [25] [25] ;
unsigned char arr_9 [25] [25] [25] ;
long long int arr_10 [25] ;
short arr_13 [25] [25] [25] ;
unsigned char arr_14 [25] [25] [25] ;
unsigned long long int arr_6 [11] ;
unsigned char arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3451404698034805705ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-26220;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 1685992606286651231ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 2803647650874355758LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-26789;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 17225330372547252463ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)97;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
