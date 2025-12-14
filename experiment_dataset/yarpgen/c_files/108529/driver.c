#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
unsigned char var_1 = (unsigned char)225;
signed char var_5 = (signed char)126;
unsigned int var_7 = 2150704353U;
int var_9 = 206207307;
unsigned int var_16 = 3338169281U;
int zero = 0;
unsigned long long int var_17 = 7020140245863183799ULL;
long long int var_18 = -7386832197065046670LL;
long long int var_19 = 1226895740505521111LL;
signed char var_20 = (signed char)-108;
unsigned short var_21 = (unsigned short)33810;
signed char var_22 = (signed char)20;
unsigned int var_23 = 3044590489U;
unsigned short var_24 = (unsigned short)5194;
unsigned char arr_0 [12] ;
short arr_2 [12] ;
unsigned short arr_4 [15] ;
signed char arr_3 [12] [12] ;
_Bool arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)99 : (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)13579;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)47483;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-89 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
