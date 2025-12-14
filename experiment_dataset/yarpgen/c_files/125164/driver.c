#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-98;
signed char var_8 = (signed char)47;
signed char var_12 = (signed char)-58;
int zero = 0;
unsigned long long int var_16 = 254176638405983377ULL;
unsigned char var_17 = (unsigned char)187;
unsigned char var_18 = (unsigned char)37;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)113;
long long int var_21 = 727674962602384190LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 3878122635233840417ULL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)92;
unsigned short var_26 = (unsigned short)20179;
short var_27 = (short)27537;
unsigned int var_28 = 472397518U;
signed char var_29 = (signed char)4;
unsigned int var_30 = 314680559U;
unsigned int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
signed char arr_2 [25] ;
_Bool arr_4 [17] [17] ;
_Bool arr_5 [17] [17] ;
unsigned long long int arr_7 [17] ;
int arr_8 [17] [17] [17] ;
int arr_11 [22] ;
signed char arr_3 [25] ;
int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 234604377U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 16852038615367590409ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 17707419885381264073ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -36957759;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -195062686;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = -1983111552;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
