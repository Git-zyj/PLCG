#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2745302104U;
unsigned int var_7 = 2785898546U;
unsigned long long int var_8 = 4056233078714630009ULL;
unsigned short var_11 = (unsigned short)7780;
unsigned char var_17 = (unsigned char)189;
int zero = 0;
short var_18 = (short)26737;
unsigned long long int var_19 = 8297443823497218828ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)4776;
unsigned long long int var_22 = 17384383791767361763ULL;
unsigned char var_23 = (unsigned char)249;
short var_24 = (short)-29001;
short arr_0 [15] ;
int arr_1 [15] ;
unsigned char arr_3 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned long long int arr_9 [18] [18] ;
unsigned short arr_2 [15] ;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-13369;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -2042194426;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 6792988473627513101ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 14303583950472987291ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12907 : (unsigned short)25640;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)103;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
