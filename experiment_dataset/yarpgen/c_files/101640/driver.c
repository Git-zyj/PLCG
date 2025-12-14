#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3871;
signed char var_3 = (signed char)60;
short var_6 = (short)-26800;
signed char var_7 = (signed char)-28;
long long int var_10 = 4462374427648676274LL;
long long int var_11 = 7603343161481453047LL;
int zero = 0;
unsigned long long int var_14 = 6861620281730495605ULL;
signed char var_15 = (signed char)34;
int var_16 = -856066822;
int var_17 = 1175128253;
signed char var_18 = (signed char)47;
long long int var_19 = 4851670330362174088LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -8704477524470275077LL;
int arr_0 [22] ;
_Bool arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -2128233822;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
