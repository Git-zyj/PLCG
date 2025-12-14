#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2104128372612595350LL;
_Bool var_1 = (_Bool)1;
long long int var_3 = -5639428346586197122LL;
unsigned int var_4 = 2571675948U;
long long int var_6 = 7593563830634251424LL;
long long int var_7 = -4267518505262742998LL;
short var_11 = (short)-22338;
short var_16 = (short)11087;
int zero = 0;
signed char var_18 = (signed char)58;
signed char var_19 = (signed char)-55;
signed char var_20 = (signed char)62;
unsigned int var_21 = 404604900U;
unsigned long long int var_22 = 744281790926645458ULL;
unsigned long long int var_23 = 16622341370921839683ULL;
short arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
_Bool arr_3 [22] [22] ;
unsigned long long int arr_4 [22] ;
int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25814 : (short)-15891;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)9388;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1443430413977409418ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -670921762 : -1061109027;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
