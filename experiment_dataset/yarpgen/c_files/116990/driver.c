#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9902073612235835573ULL;
unsigned int var_1 = 1367533560U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 613125050U;
unsigned char var_6 = (unsigned char)34;
_Bool var_8 = (_Bool)0;
int var_9 = 616833588;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17241342691281034822ULL;
unsigned char var_13 = (unsigned char)142;
short var_14 = (short)1906;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 6130894424497739438ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
