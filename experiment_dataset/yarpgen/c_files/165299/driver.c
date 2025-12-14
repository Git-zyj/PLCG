#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24485;
signed char var_1 = (signed char)-89;
unsigned long long int var_2 = 7471233036179388673ULL;
unsigned long long int var_3 = 14155828776119112234ULL;
unsigned char var_4 = (unsigned char)218;
signed char var_6 = (signed char)21;
long long int var_7 = -1639007427809000672LL;
unsigned char var_8 = (unsigned char)187;
unsigned short var_9 = (unsigned short)39639;
signed char var_10 = (signed char)-14;
unsigned short var_11 = (unsigned short)55174;
int zero = 0;
unsigned short var_12 = (unsigned short)3277;
signed char var_13 = (signed char)-58;
short var_14 = (short)18712;
signed char var_15 = (signed char)127;
short var_16 = (short)14331;
signed char arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 9116839746042705651LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)62436;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
