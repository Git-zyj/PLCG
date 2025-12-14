#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 381887722U;
long long int var_2 = -5436709405628690294LL;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)102;
long long int var_6 = 7779969297275352734LL;
unsigned int var_8 = 3647074776U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)237;
unsigned long long int var_11 = 7144972667730034860ULL;
short var_12 = (short)21679;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = -524945738;
unsigned char var_16 = (unsigned char)76;
unsigned char var_17 = (unsigned char)143;
unsigned long long int arr_0 [15] ;
int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 15409561228788801234ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1632486447;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1037544414150567225ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
