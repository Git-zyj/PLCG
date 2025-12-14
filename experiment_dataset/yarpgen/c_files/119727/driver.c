#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
long long int var_1 = 6761175923636151294LL;
signed char var_2 = (signed char)-101;
unsigned long long int var_4 = 6894357909226947514ULL;
short var_6 = (short)31261;
unsigned long long int var_7 = 12218921071625406789ULL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 8409641320826981402LL;
signed char var_13 = (signed char)-18;
unsigned short var_14 = (unsigned short)63139;
unsigned short var_15 = (unsigned short)48542;
unsigned long long int var_16 = 16236466258103370832ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)21;
unsigned char var_19 = (unsigned char)41;
unsigned short var_20 = (unsigned short)5613;
unsigned int arr_1 [22] [22] ;
signed char arr_5 [25] ;
signed char arr_6 [25] ;
unsigned int arr_10 [25] ;
long long int arr_12 [25] [25] [25] [25] ;
signed char arr_13 [25] [25] ;
unsigned long long int arr_3 [22] ;
short arr_7 [25] ;
long long int arr_20 [25] [25] [25] [25] ;
int arr_31 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1652151383U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 1070361117U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 4118968144417878561LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3271543999253444451ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)-9066;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -8225450872773496339LL : -4717365351838469624LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = 274988368;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
