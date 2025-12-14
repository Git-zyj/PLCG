#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
unsigned int var_5 = 3517434714U;
unsigned char var_6 = (unsigned char)37;
unsigned long long int var_10 = 5850292107820014893ULL;
unsigned short var_11 = (unsigned short)6072;
unsigned long long int var_14 = 15589294521493414670ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)26179;
unsigned char var_19 = (unsigned char)151;
int zero = 0;
long long int var_20 = 7166568041163618563LL;
int var_21 = 1932166122;
long long int var_22 = -3982041096651382500LL;
signed char var_23 = (signed char)5;
int arr_1 [25] ;
unsigned char arr_2 [25] [25] ;
_Bool arr_3 [25] ;
unsigned short arr_6 [25] ;
long long int arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 612538799;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)37377;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5224042694136632840LL : 8847549022699053694LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
