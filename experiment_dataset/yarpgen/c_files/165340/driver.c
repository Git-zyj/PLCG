#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4394603277185072681ULL;
long long int var_4 = -1750253527190773265LL;
unsigned long long int var_5 = 17566923523650755085ULL;
unsigned long long int var_6 = 1836358860562332804ULL;
unsigned long long int var_8 = 9286899611061510713ULL;
unsigned int var_9 = 4190029874U;
unsigned long long int var_12 = 17880734568833507683ULL;
int var_14 = -596320033;
int zero = 0;
unsigned long long int var_20 = 13111505955202804627ULL;
long long int var_21 = -5470289493486757225LL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 340726707U;
unsigned char var_24 = (unsigned char)58;
unsigned short arr_0 [20] ;
short arr_1 [20] [20] ;
_Bool arr_2 [20] ;
short arr_4 [17] ;
unsigned int arr_5 [17] [17] ;
unsigned char arr_3 [20] ;
short arr_6 [17] [17] ;
unsigned char arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)20041;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)11707;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)12973;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 987412172U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-3340;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
