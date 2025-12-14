#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned short var_1 = (unsigned short)40602;
unsigned char var_3 = (unsigned char)28;
signed char var_5 = (signed char)-93;
signed char var_6 = (signed char)-60;
signed char var_9 = (signed char)-101;
signed char var_11 = (signed char)-37;
int zero = 0;
short var_16 = (short)9945;
_Bool var_17 = (_Bool)0;
long long int var_18 = 981000766244238508LL;
unsigned int var_19 = 2820152502U;
long long int var_20 = 4572420309120743809LL;
unsigned short arr_0 [10] ;
unsigned int arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
long long int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)59860;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 564026850U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 4155795378U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -1248551943876919037LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
