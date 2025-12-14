#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9170367104039386455ULL;
signed char var_2 = (signed char)58;
unsigned char var_3 = (unsigned char)68;
unsigned char var_4 = (unsigned char)229;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-2300;
unsigned short var_7 = (unsigned short)49143;
unsigned long long int var_8 = 12090130741542166843ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-10;
short var_12 = (short)-27625;
int zero = 0;
long long int var_13 = -1510279468738810930LL;
unsigned short var_14 = (unsigned short)41402;
unsigned short var_15 = (unsigned short)15381;
short arr_0 [23] ;
signed char arr_4 [23] [23] ;
unsigned char arr_5 [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)25700;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)56889;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
