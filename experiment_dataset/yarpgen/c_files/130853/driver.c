#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9317438360215123973ULL;
unsigned long long int var_1 = 8720449217530143590ULL;
unsigned int var_4 = 3643708113U;
unsigned long long int var_5 = 8044690205826490425ULL;
signed char var_6 = (signed char)127;
unsigned short var_7 = (unsigned short)44846;
int zero = 0;
unsigned short var_12 = (unsigned short)4847;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-11377;
unsigned long long int var_15 = 603086319562339415ULL;
unsigned long long int var_16 = 3943317355017930381ULL;
long long int var_17 = 2125090713425355743LL;
unsigned long long int var_18 = 9773914593191294396ULL;
int var_19 = 371492328;
long long int var_20 = -7332952884257990462LL;
long long int var_21 = 5964460433896192226LL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-9203;
unsigned int arr_1 [16] ;
signed char arr_3 [16] [16] [16] ;
unsigned long long int arr_5 [16] [16] [16] [16] ;
_Bool arr_7 [16] ;
_Bool arr_9 [16] [16] ;
_Bool arr_11 [16] ;
unsigned long long int arr_15 [16] [16] ;
unsigned long long int arr_13 [16] [16] ;
unsigned char arr_16 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3728077178U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 4640057384622678405ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 12967188983259101184ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 4532010752073391547ULL : 3655590951418602303ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)118;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
