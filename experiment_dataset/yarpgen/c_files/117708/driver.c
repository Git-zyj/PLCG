#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)208;
unsigned long long int var_7 = 16170402925867068511ULL;
long long int var_8 = -8349025299371895379LL;
int var_10 = 1808076606;
signed char var_11 = (signed char)-121;
short var_13 = (short)-7401;
int zero = 0;
long long int var_15 = -5525288652849063288LL;
int var_16 = -748093025;
int arr_1 [21] ;
short arr_4 [14] [14] ;
short arr_3 [21] [21] ;
unsigned char arr_8 [14] ;
int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1384094763 : 230622301;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-11236;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)224 : (short)26786;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -2073988588;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
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
