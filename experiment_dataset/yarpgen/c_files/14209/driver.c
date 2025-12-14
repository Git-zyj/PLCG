#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10705367553009605553ULL;
unsigned short var_2 = (unsigned short)35398;
signed char var_3 = (signed char)-125;
short var_5 = (short)-11484;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 13499466729656453648ULL;
unsigned long long int var_12 = 7213924892927899316ULL;
int zero = 0;
long long int var_14 = -1156733370898011769LL;
int var_15 = -812423957;
long long int var_16 = -6573916445871765894LL;
short var_17 = (short)17810;
unsigned short var_18 = (unsigned short)44210;
short var_19 = (short)-3056;
unsigned short var_20 = (unsigned short)44940;
signed char var_21 = (signed char)36;
unsigned int var_22 = 3891918737U;
_Bool var_23 = (_Bool)0;
unsigned int arr_0 [22] ;
int arr_1 [22] ;
unsigned short arr_2 [22] ;
signed char arr_9 [22] ;
unsigned int arr_16 [22] [22] [22] [22] ;
_Bool arr_3 [22] [22] ;
short arr_6 [12] ;
_Bool arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2914513428U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1833149406;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)25466;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 4284128710U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)17585;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
