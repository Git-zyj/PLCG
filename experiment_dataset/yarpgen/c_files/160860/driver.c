#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
signed char var_2 = (signed char)-4;
long long int var_3 = -3075800719076747324LL;
unsigned short var_4 = (unsigned short)12564;
short var_5 = (short)-31535;
signed char var_6 = (signed char)34;
signed char var_9 = (signed char)-37;
signed char var_10 = (signed char)-35;
int var_11 = 1463616142;
unsigned long long int var_12 = 17074754922999328622ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)121;
unsigned short var_15 = (unsigned short)2482;
unsigned long long int var_16 = 3568139109460155999ULL;
signed char var_17 = (signed char)-121;
signed char var_18 = (signed char)25;
unsigned int var_19 = 1466279234U;
long long int arr_4 [11] ;
unsigned short arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 8414640619046581118LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)21774;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
