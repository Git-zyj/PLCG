#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12209723671925837186ULL;
unsigned int var_1 = 430267438U;
unsigned long long int var_3 = 5987135454816119048ULL;
short var_4 = (short)-5830;
long long int var_5 = -1971347061620468989LL;
unsigned long long int var_7 = 8714267435791419896ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_16 = (unsigned char)207;
int zero = 0;
short var_17 = (short)24320;
unsigned int var_18 = 1156200348U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)33;
_Bool var_21 = (_Bool)1;
unsigned char arr_3 [11] [11] [11] ;
unsigned int arr_5 [11] ;
unsigned long long int arr_6 [11] [11] [11] [11] ;
signed char arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 4194105543U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 12707468070588986556ULL : 8725326331483580572ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)81;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
