#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19866;
unsigned long long int var_2 = 9090769907048240055ULL;
signed char var_6 = (signed char)-55;
_Bool var_7 = (_Bool)0;
short var_10 = (short)17276;
long long int var_13 = -4130590970322392393LL;
short var_15 = (short)28554;
unsigned char var_16 = (unsigned char)74;
int zero = 0;
signed char var_17 = (signed char)24;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)63001;
signed char var_20 = (signed char)13;
long long int var_21 = 3638842598044585999LL;
unsigned long long int var_22 = 17487940142140984090ULL;
int var_23 = 1608240596;
unsigned long long int var_24 = 16991371874974778650ULL;
unsigned char var_25 = (unsigned char)118;
unsigned short arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
int arr_5 [19] [19] [19] [19] ;
int arr_6 [19] ;
unsigned short arr_9 [19] [19] ;
unsigned char arr_14 [17] [17] [17] ;
int arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)17440;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 871254040168778627ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -24564862;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1615344971;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)30646;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 346094219;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
