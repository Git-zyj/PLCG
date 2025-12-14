#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 780029478;
long long int var_2 = 4755142116367511074LL;
short var_5 = (short)-20390;
long long int var_6 = -1560961579621392691LL;
long long int var_7 = 6734087217570614423LL;
short var_8 = (short)2998;
unsigned char var_9 = (unsigned char)107;
int zero = 0;
unsigned short var_10 = (unsigned short)33385;
short var_11 = (short)15529;
_Bool var_12 = (_Bool)1;
int var_13 = 1121270510;
unsigned int arr_0 [17] ;
long long int arr_2 [17] [17] ;
_Bool arr_3 [17] [17] [17] ;
unsigned char arr_4 [17] [17] ;
_Bool arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1353835596U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -197229026857879710LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
