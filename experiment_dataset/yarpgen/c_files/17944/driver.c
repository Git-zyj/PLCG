#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57190;
int var_2 = 1503234956;
unsigned int var_3 = 1650064042U;
unsigned int var_4 = 3491790089U;
unsigned int var_6 = 3240504277U;
signed char var_7 = (signed char)101;
unsigned char var_8 = (unsigned char)42;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)(-127 - 1);
unsigned long long int var_11 = 11861792394424679414ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)1825;
unsigned int var_14 = 4134515093U;
unsigned int var_15 = 266241413U;
unsigned long long int arr_0 [20] ;
short arr_1 [20] ;
short arr_2 [20] ;
unsigned char arr_4 [18] ;
long long int arr_3 [20] [20] ;
unsigned char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 464678437464528577ULL : 17183491332883916078ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)1791 : (short)24979;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-11931;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)155 : (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -3751581224057268616LL : 5345319842290637621LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)170;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
