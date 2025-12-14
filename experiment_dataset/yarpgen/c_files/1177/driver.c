#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14738;
long long int var_1 = -3363626940937818567LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)59202;
signed char var_4 = (signed char)125;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)46349;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)346;
signed char var_10 = (signed char)58;
long long int var_11 = 8268321182147083071LL;
signed char var_12 = (signed char)-38;
unsigned short var_16 = (unsigned short)39271;
signed char var_17 = (signed char)-1;
long long int var_18 = 224051314300705052LL;
int zero = 0;
unsigned char var_20 = (unsigned char)95;
signed char var_21 = (signed char)-35;
short var_22 = (short)-2244;
unsigned char var_23 = (unsigned char)141;
unsigned char var_24 = (unsigned char)167;
signed char var_25 = (signed char)123;
unsigned long long int var_26 = 1287436677969429231ULL;
unsigned long long int var_27 = 2254493601166832644ULL;
unsigned char var_28 = (unsigned char)54;
unsigned short var_29 = (unsigned short)8528;
unsigned char var_30 = (unsigned char)160;
signed char arr_4 [20] ;
_Bool arr_6 [20] ;
_Bool arr_7 [20] [20] ;
signed char arr_11 [20] [20] [20] [20] [20] ;
signed char arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (signed char)-115;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
