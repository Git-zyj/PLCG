#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
_Bool var_3 = (_Bool)1;
long long int var_12 = -4863375971977626733LL;
long long int var_14 = 1960458225415896029LL;
int zero = 0;
long long int var_17 = -4146732316388030146LL;
short var_18 = (short)-27940;
long long int var_19 = -204358740170989311LL;
unsigned char var_20 = (unsigned char)121;
unsigned long long int var_21 = 7110860070521318686ULL;
unsigned long long int var_22 = 18355296160972577491ULL;
long long int arr_0 [22] ;
int arr_1 [22] ;
unsigned int arr_2 [22] [22] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8769305342008742648LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1423616734 : 141477548;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2141687208U : 2578895234U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -1280187670;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
