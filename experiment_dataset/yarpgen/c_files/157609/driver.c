#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
_Bool var_2 = (_Bool)0;
int var_3 = -396680646;
unsigned short var_5 = (unsigned short)58510;
int var_8 = -2092734601;
int var_11 = 1506128157;
long long int var_12 = -5768652804813292442LL;
int zero = 0;
unsigned long long int var_18 = 5263762475035624349ULL;
short var_19 = (short)-16176;
unsigned long long int var_20 = 2309011789522226776ULL;
long long int var_21 = 7812343283869146642LL;
unsigned long long int arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8093160034097155525ULL : 7657782889729488440ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 7669507514597942196LL : -1374522770024653986LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
