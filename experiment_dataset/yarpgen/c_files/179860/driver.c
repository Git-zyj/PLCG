#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24775;
unsigned short var_1 = (unsigned short)10291;
signed char var_2 = (signed char)-17;
unsigned short var_3 = (unsigned short)63307;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3407023820U;
unsigned short var_9 = (unsigned short)17856;
unsigned long long int var_11 = 6969539203888761321ULL;
short var_12 = (short)-30949;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)55;
unsigned short var_17 = (unsigned short)36767;
unsigned char var_18 = (unsigned char)6;
unsigned int var_19 = 1638574326U;
long long int var_20 = 386942135906667885LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2422724080U;
unsigned int var_23 = 3387241062U;
unsigned char var_24 = (unsigned char)189;
long long int var_25 = 7463183540072717596LL;
unsigned char var_26 = (unsigned char)131;
_Bool arr_0 [17] ;
unsigned long long int arr_1 [17] ;
int arr_2 [17] ;
unsigned long long int arr_5 [12] [12] ;
short arr_7 [15] [15] ;
unsigned char arr_3 [17] ;
unsigned char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 17333156653656615437ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -280424600;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 15012063254543244976ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (short)17878;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)217;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
