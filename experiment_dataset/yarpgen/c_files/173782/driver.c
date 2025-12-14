#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -637859962;
signed char var_6 = (signed char)58;
_Bool var_10 = (_Bool)0;
long long int var_15 = -291070330134842891LL;
unsigned long long int var_18 = 3514104739582516099ULL;
int zero = 0;
long long int var_20 = 567082103188889423LL;
signed char var_21 = (signed char)51;
unsigned long long int var_22 = 16998475009305291681ULL;
unsigned long long int var_23 = 9838247640538302252ULL;
_Bool var_24 = (_Bool)0;
long long int arr_2 [16] [16] ;
short arr_4 [16] ;
signed char arr_7 [16] [16] [16] ;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 4148602548567667685LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-17850;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2696140741387458972LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
