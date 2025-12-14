#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_7 = -671229396704292659LL;
unsigned long long int var_8 = 5890381626002943238ULL;
int var_9 = 1974540686;
unsigned char var_10 = (unsigned char)134;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)106;
unsigned long long int var_18 = 3016605698230312609ULL;
unsigned long long int var_19 = 11233948592157346223ULL;
unsigned int var_20 = 3458038671U;
unsigned short var_21 = (unsigned short)39269;
unsigned short arr_0 [12] ;
_Bool arr_5 [12] [12] ;
unsigned char arr_7 [12] [12] [12] ;
signed char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)13465;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)41;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
