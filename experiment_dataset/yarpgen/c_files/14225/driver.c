#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8775487467797566131LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)84;
short var_11 = (short)-29485;
short var_12 = (short)-7138;
unsigned short var_13 = (unsigned short)34441;
signed char var_14 = (signed char)-24;
long long int var_15 = -185947646124564054LL;
int zero = 0;
unsigned char var_16 = (unsigned char)220;
unsigned char var_17 = (unsigned char)74;
int var_18 = 879387455;
short var_19 = (short)-27031;
long long int var_20 = -5839420117898369227LL;
int arr_2 [19] [19] ;
unsigned short arr_3 [19] [19] [19] ;
long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1610501483;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)37202;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 1256809273154036836LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
