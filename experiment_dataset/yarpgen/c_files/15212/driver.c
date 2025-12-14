#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
int var_2 = 429041952;
long long int var_3 = 121136790039084205LL;
int var_4 = -1284576754;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-24731;
int zero = 0;
unsigned char var_11 = (unsigned char)114;
unsigned long long int var_12 = 2792211823417742118ULL;
unsigned short var_13 = (unsigned short)2783;
unsigned char var_14 = (unsigned char)18;
unsigned short var_15 = (unsigned short)37202;
unsigned long long int arr_0 [14] ;
short arr_6 [14] [14] [14] ;
signed char arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17492923547214344165ULL : 6481004918288211165ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)10366;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)102 : (signed char)48;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
