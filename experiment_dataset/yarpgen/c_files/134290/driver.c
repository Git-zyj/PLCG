#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61550;
unsigned short var_2 = (unsigned short)23951;
signed char var_6 = (signed char)-6;
long long int var_7 = 4271823346126500902LL;
unsigned short var_8 = (unsigned short)64893;
unsigned char var_9 = (unsigned char)200;
int zero = 0;
unsigned short var_10 = (unsigned short)25979;
unsigned short var_11 = (unsigned short)43854;
unsigned short var_12 = (unsigned short)38630;
unsigned char var_13 = (unsigned char)138;
unsigned short var_14 = (unsigned short)23384;
unsigned int arr_0 [14] [14] ;
long long int arr_1 [14] ;
unsigned char arr_2 [14] [14] ;
unsigned int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1643771647U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -764271288692346433LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3424059873U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
