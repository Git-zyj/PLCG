#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 218443050U;
unsigned short var_6 = (unsigned short)15313;
long long int var_9 = 2301450490447888108LL;
int var_10 = 2120648026;
int zero = 0;
unsigned long long int var_11 = 2153978149737547216ULL;
unsigned int var_12 = 279200430U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7404026247757688259ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3786302732U;
unsigned int var_17 = 2983024367U;
_Bool var_18 = (_Bool)0;
long long int arr_3 [14] [14] ;
short arr_7 [14] [14] [14] ;
long long int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 9191048508245707867LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-32762 : (short)-6204;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 685881614731732623LL : 7244467423581194667LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
