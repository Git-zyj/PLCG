#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8421854620672776746LL;
long long int var_1 = 2311069129968338153LL;
unsigned short var_2 = (unsigned short)44885;
long long int var_4 = -3701313922536310681LL;
unsigned int var_5 = 2120592083U;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6773299903655224660LL;
unsigned long long int var_10 = 1008061765020946057ULL;
_Bool var_12 = (_Bool)1;
long long int var_15 = -1465363864079540680LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 10615812836976877127ULL;
unsigned char var_19 = (unsigned char)230;
long long int var_20 = -6619301852068073953LL;
short var_21 = (short)4306;
short var_22 = (short)-27016;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)18;
unsigned char var_25 = (unsigned char)73;
int var_26 = 44856466;
int var_27 = -961947375;
short var_28 = (short)-25232;
unsigned int var_29 = 2918319702U;
unsigned int arr_9 [19] ;
unsigned char arr_15 [19] ;
unsigned int arr_16 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 2201527976U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 2954853033U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
