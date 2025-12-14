#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -844589629788157921LL;
unsigned int var_2 = 2033992045U;
unsigned char var_3 = (unsigned char)98;
int var_4 = -610254392;
int var_5 = -793614332;
_Bool var_7 = (_Bool)1;
long long int var_8 = 5414822072224878312LL;
int var_9 = -1703100181;
unsigned short var_10 = (unsigned short)38854;
unsigned char var_11 = (unsigned char)166;
unsigned int var_12 = 4151552954U;
int zero = 0;
int var_14 = -1168581743;
unsigned char var_15 = (unsigned char)61;
unsigned int var_16 = 3738869434U;
unsigned char var_17 = (unsigned char)98;
long long int var_18 = 4137061446828520152LL;
int arr_0 [23] ;
unsigned char arr_1 [23] ;
long long int arr_2 [23] [23] ;
unsigned short arr_3 [23] ;
long long int arr_4 [23] ;
unsigned short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1704332325;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -92863422298497596LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)4348;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 4524519712819371490LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)10656;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
