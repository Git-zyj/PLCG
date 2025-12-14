#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29143;
_Bool var_1 = (_Bool)0;
int var_2 = 2056397067;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 866752991U;
unsigned char var_5 = (unsigned char)108;
unsigned int var_6 = 1232540514U;
_Bool var_7 = (_Bool)1;
int var_9 = -1655595152;
unsigned char var_10 = (unsigned char)137;
int zero = 0;
long long int var_12 = 4473839445610886543LL;
_Bool var_13 = (_Bool)0;
int var_14 = 1786403001;
_Bool var_15 = (_Bool)1;
unsigned long long int arr_7 [21] ;
unsigned long long int arr_8 [21] ;
unsigned char arr_9 [21] [21] [21] ;
short arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 10676220397408858726ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 6761914647679158791ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-14815;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
