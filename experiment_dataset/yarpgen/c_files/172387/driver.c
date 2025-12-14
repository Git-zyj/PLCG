#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20055;
short var_3 = (short)-13707;
long long int var_4 = 8170730055187133214LL;
short var_5 = (short)27811;
unsigned long long int var_6 = 3535442608301197826ULL;
short var_7 = (short)18204;
long long int var_8 = 5429858802749115608LL;
unsigned char var_9 = (unsigned char)122;
unsigned int var_11 = 1020002419U;
long long int var_14 = 432697691026329475LL;
int zero = 0;
long long int var_15 = 4167149315290325468LL;
short var_16 = (short)-4983;
long long int var_17 = 1607194703780264763LL;
short var_18 = (short)9298;
int var_19 = -522982005;
unsigned short var_20 = (unsigned short)10185;
int var_21 = -1284540134;
int arr_0 [22] [22] ;
int arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 720944817;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1719541148 : -985398840;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51055 : (unsigned short)57621;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 13190503649369600126ULL : 6013697309492040630ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
