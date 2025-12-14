#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3423311354U;
unsigned int var_2 = 771543060U;
long long int var_5 = -6666686707758643642LL;
signed char var_7 = (signed char)-14;
unsigned long long int var_8 = 5432205006172677799ULL;
int var_9 = -1054096420;
_Bool var_12 = (_Bool)0;
int var_13 = 106314490;
int zero = 0;
unsigned char var_14 = (unsigned char)138;
unsigned long long int var_15 = 9313967154906746577ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3841957963U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-62;
unsigned long long int var_21 = 1600208766314307142ULL;
unsigned long long int var_22 = 12122737250516117325ULL;
int var_23 = -1044792696;
short var_24 = (short)-30829;
unsigned char var_25 = (unsigned char)20;
unsigned long long int var_26 = 16338891902307339914ULL;
unsigned long long int var_27 = 5543797522986276145ULL;
unsigned long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned int arr_3 [21] ;
_Bool arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 17348546015588093340ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)342;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3297045324U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
