#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3705032041U;
unsigned long long int var_2 = 2231241062629049925ULL;
long long int var_3 = 1483691538127142735LL;
signed char var_4 = (signed char)-12;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2388593175U;
unsigned int var_8 = 2003441640U;
unsigned long long int var_9 = 5251783051313401196ULL;
unsigned int var_10 = 3451018268U;
signed char var_12 = (signed char)121;
unsigned char var_13 = (unsigned char)18;
long long int var_14 = 1562071072549123631LL;
unsigned int var_15 = 936642851U;
unsigned short var_16 = (unsigned short)6542;
int zero = 0;
unsigned int var_17 = 479430142U;
unsigned short var_18 = (unsigned short)6906;
unsigned int var_19 = 3244364649U;
unsigned int var_20 = 1876255146U;
signed char var_21 = (signed char)54;
unsigned int var_22 = 2047044156U;
unsigned char var_23 = (unsigned char)163;
_Bool arr_13 [16] [16] [16] [16] [16] ;
unsigned int arr_14 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1570987614U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
