#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2792796897U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-29017;
unsigned short var_5 = (unsigned short)43159;
long long int var_8 = 6016137425891491701LL;
unsigned short var_10 = (unsigned short)40183;
unsigned short var_13 = (unsigned short)12267;
unsigned long long int var_15 = 13553114156409198301ULL;
short var_16 = (short)-25154;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3703676809U;
short var_20 = (short)23849;
int var_21 = 2000261009;
unsigned short var_22 = (unsigned short)45294;
long long int arr_4 [11] [11] [11] ;
_Bool arr_6 [11] [11] [11] [11] ;
signed char arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4434162498116185054LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)-15;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
