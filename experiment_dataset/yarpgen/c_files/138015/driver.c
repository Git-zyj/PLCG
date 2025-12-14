#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2297854689252850593LL;
unsigned long long int var_2 = 4635854318766158124ULL;
short var_3 = (short)-25510;
unsigned char var_8 = (unsigned char)60;
long long int var_9 = 7996697270158633277LL;
unsigned char var_11 = (unsigned char)51;
unsigned char var_12 = (unsigned char)88;
long long int var_14 = 3607181343601916076LL;
unsigned short var_16 = (unsigned short)32340;
unsigned short var_17 = (unsigned short)12314;
unsigned long long int var_19 = 8344088899973999280ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)60587;
unsigned char var_21 = (unsigned char)106;
_Bool var_22 = (_Bool)1;
long long int var_23 = 5570296967411675076LL;
unsigned long long int arr_2 [14] ;
short arr_3 [14] [14] [14] ;
_Bool arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 11305202559798379783ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-31123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
