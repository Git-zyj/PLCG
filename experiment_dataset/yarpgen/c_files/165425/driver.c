#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43093;
unsigned int var_1 = 3301608684U;
unsigned char var_2 = (unsigned char)89;
signed char var_3 = (signed char)-83;
signed char var_5 = (signed char)110;
unsigned short var_7 = (unsigned short)58607;
long long int var_9 = -482012177389386843LL;
unsigned short var_10 = (unsigned short)15839;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-47;
unsigned int var_13 = 1219824988U;
short var_14 = (short)16524;
unsigned short var_15 = (unsigned short)33508;
short var_16 = (short)-30305;
long long int arr_0 [10] ;
unsigned short arr_1 [10] ;
signed char arr_2 [12] [12] ;
unsigned short arr_3 [12] ;
unsigned int arr_4 [12] ;
unsigned long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -4919633569087349707LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9327 : (unsigned short)22959;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)18914;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2184137234U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14609238545488358275ULL : 10861709450816516382ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
