#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -853323918;
unsigned char var_3 = (unsigned char)254;
unsigned short var_4 = (unsigned short)7363;
unsigned short var_5 = (unsigned short)30471;
short var_6 = (short)32735;
unsigned char var_7 = (unsigned char)79;
unsigned short var_10 = (unsigned short)57658;
unsigned short var_11 = (unsigned short)1764;
unsigned short var_12 = (unsigned short)16577;
short var_14 = (short)-3183;
unsigned long long int var_15 = 1940609348593922514ULL;
short var_16 = (short)21317;
int zero = 0;
signed char var_17 = (signed char)-62;
unsigned char var_18 = (unsigned char)236;
unsigned char var_19 = (unsigned char)173;
_Bool var_20 = (_Bool)0;
short var_21 = (short)25665;
unsigned short arr_0 [11] ;
short arr_1 [11] ;
short arr_2 [11] [11] ;
_Bool arr_3 [11] ;
long long int arr_8 [11] ;
unsigned long long int arr_9 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)8499;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)21465;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)32516 : (short)-10414;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4317776205481434182LL : 6280180890032744027LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 18428993142584687214ULL : 13102953343175698671ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
