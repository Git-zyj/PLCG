#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11901275549536027333ULL;
unsigned short var_2 = (unsigned short)3815;
unsigned short var_3 = (unsigned short)39563;
signed char var_4 = (signed char)18;
unsigned short var_6 = (unsigned short)38604;
unsigned short var_7 = (unsigned short)58585;
unsigned int var_8 = 2535410757U;
int zero = 0;
long long int var_10 = -1019456870538430372LL;
signed char var_11 = (signed char)22;
signed char var_12 = (signed char)-90;
short var_13 = (short)-9268;
unsigned short var_14 = (unsigned short)1042;
int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] [19] ;
int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 362943377;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 12449161770816066061ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1384710131;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
