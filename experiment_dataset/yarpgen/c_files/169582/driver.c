#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)85;
short var_9 = (short)1091;
short var_12 = (short)-28817;
unsigned int var_14 = 3160823853U;
unsigned char var_15 = (unsigned char)188;
unsigned long long int var_18 = 11090203884860313254ULL;
unsigned int var_19 = 2830038611U;
int zero = 0;
int var_20 = 341680685;
long long int var_21 = -7546388338804552948LL;
unsigned char var_22 = (unsigned char)164;
unsigned char var_23 = (unsigned char)117;
unsigned char var_24 = (unsigned char)76;
signed char arr_0 [17] ;
short arr_2 [17] ;
unsigned char arr_4 [17] [17] ;
_Bool arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-5 : (signed char)11;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)25853;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
