#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
unsigned char var_1 = (unsigned char)206;
long long int var_2 = -3430093553571774378LL;
long long int var_4 = 7762518285364300500LL;
long long int var_5 = -1192952547217129446LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 11267167996803395871ULL;
long long int var_9 = 3778871294392390785LL;
unsigned char var_10 = (unsigned char)37;
unsigned long long int var_14 = 12021405878812083579ULL;
unsigned int var_17 = 1067470588U;
unsigned int var_18 = 2095084161U;
int zero = 0;
short var_19 = (short)25350;
unsigned int var_20 = 1020073988U;
unsigned int var_21 = 116473388U;
signed char var_22 = (signed char)50;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 7802202309724061570ULL;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)17;
signed char var_27 = (signed char)-118;
short var_28 = (short)-29189;
unsigned char var_29 = (unsigned char)47;
_Bool var_30 = (_Bool)1;
short var_31 = (short)7944;
unsigned long long int var_32 = 7154483169025676873ULL;
short arr_7 [13] ;
unsigned long long int arr_14 [13] [13] [13] [13] [13] [13] ;
_Bool arr_15 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)19334;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13943289999281550207ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
