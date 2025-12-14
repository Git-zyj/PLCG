#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2962482692459309860ULL;
short var_3 = (short)-2831;
unsigned int var_4 = 522185084U;
signed char var_5 = (signed char)92;
short var_8 = (short)-19597;
unsigned short var_9 = (unsigned short)7998;
unsigned int var_10 = 2437670434U;
signed char var_11 = (signed char)20;
unsigned int var_13 = 161956365U;
int var_14 = -1076213894;
int zero = 0;
unsigned int var_15 = 763287911U;
unsigned char var_16 = (unsigned char)35;
unsigned short var_17 = (unsigned short)44970;
int var_18 = -1181797790;
unsigned int var_19 = 646569345U;
unsigned short var_20 = (unsigned short)11956;
long long int var_21 = -6203465838525497026LL;
unsigned char var_22 = (unsigned char)104;
unsigned long long int var_23 = 12818227524916906458ULL;
unsigned int var_24 = 1807388690U;
short var_25 = (short)24546;
unsigned char var_26 = (unsigned char)11;
unsigned int var_27 = 3656145497U;
signed char var_28 = (signed char)-86;
unsigned char var_29 = (unsigned char)87;
signed char var_30 = (signed char)-92;
signed char arr_7 [14] [14] [14] ;
unsigned char arr_11 [14] [14] [14] ;
long long int arr_12 [20] ;
unsigned int arr_13 [20] [20] ;
signed char arr_15 [20] [20] ;
signed char arr_17 [20] ;
unsigned long long int arr_20 [20] ;
unsigned int arr_16 [20] [20] [20] ;
int arr_19 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = -8941904175963306754LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = 2966492583U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)-97;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = 17214940885022758250ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1688600007U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 967066192 : 828421535;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
