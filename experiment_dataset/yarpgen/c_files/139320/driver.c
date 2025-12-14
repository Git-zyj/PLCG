#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14585352255777481525ULL;
short var_1 = (short)9598;
short var_2 = (short)-32419;
_Bool var_3 = (_Bool)1;
int var_6 = -2070347467;
unsigned char var_10 = (unsigned char)79;
unsigned char var_11 = (unsigned char)243;
long long int var_12 = 5286314709665889112LL;
unsigned long long int var_13 = 17365972817942743953ULL;
_Bool var_14 = (_Bool)0;
int var_15 = -1390575519;
long long int var_18 = -4646467139366435776LL;
int zero = 0;
short var_20 = (short)-7301;
short var_21 = (short)5096;
unsigned char var_22 = (unsigned char)103;
short var_23 = (short)-30993;
short var_24 = (short)26025;
unsigned long long int arr_0 [22] ;
long long int arr_1 [22] ;
long long int arr_2 [22] ;
long long int arr_3 [22] [22] ;
short arr_6 [22] [22] [22] ;
int arr_9 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 12190298258588769840ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -7035949096938141295LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -2380459054370938626LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -8709548869063295887LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-15678;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -1132257200;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
