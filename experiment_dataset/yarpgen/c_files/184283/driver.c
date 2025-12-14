#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2053476226U;
unsigned long long int var_2 = 15116902454356228014ULL;
long long int var_10 = -3713197187634680561LL;
signed char var_12 = (signed char)-9;
unsigned char var_13 = (unsigned char)162;
int zero = 0;
int var_16 = 574302679;
int var_17 = -1964002003;
unsigned long long int var_18 = 3075815454110332514ULL;
unsigned char var_19 = (unsigned char)145;
_Bool var_20 = (_Bool)1;
signed char arr_0 [24] ;
short arr_1 [24] ;
short arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)26471;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-21716;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
