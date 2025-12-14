#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2973409545674294858LL;
int var_1 = 1182875609;
int var_2 = 950681816;
unsigned char var_3 = (unsigned char)244;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_6 = 465489498;
unsigned short var_7 = (unsigned short)4271;
unsigned char var_8 = (unsigned char)203;
unsigned int var_9 = 3566353402U;
unsigned int var_10 = 3698166835U;
unsigned char var_11 = (unsigned char)253;
int zero = 0;
int var_12 = -1931078174;
int var_13 = -372206152;
long long int var_14 = 56742793488852153LL;
int var_15 = -1010642991;
unsigned char var_16 = (unsigned char)138;
unsigned short arr_0 [11] ;
_Bool arr_1 [11] ;
short arr_2 [11] [11] [11] ;
unsigned int arr_3 [11] ;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20610 : (unsigned short)3255;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-6667;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 901735361U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -235452256456486740LL : 5260153472053294377LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
