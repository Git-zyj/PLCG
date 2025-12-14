#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -444785556;
long long int var_2 = 7908095211084957268LL;
short var_3 = (short)-26494;
signed char var_4 = (signed char)92;
int var_5 = 1829169552;
_Bool var_8 = (_Bool)1;
int var_9 = -1994184122;
unsigned long long int var_11 = 4017259445709300907ULL;
int zero = 0;
short var_14 = (short)1048;
unsigned short var_15 = (unsigned short)41893;
unsigned long long int var_16 = 16199105385939840997ULL;
unsigned long long int var_17 = 18424853284523888624ULL;
long long int var_18 = -707817998580674460LL;
unsigned char var_19 = (unsigned char)67;
unsigned long long int var_20 = 1763500313734411654ULL;
short var_21 = (short)5946;
long long int arr_0 [14] ;
unsigned long long int arr_2 [14] ;
unsigned char arr_4 [14] [14] ;
signed char arr_5 [14] [14] [14] ;
long long int arr_7 [21] ;
unsigned int arr_9 [21] ;
short arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -3670263986228554708LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4807527635597263059ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 9133558895753089733LL : -1479533145291510220LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3390881588U : 1616752328U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)5724;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
