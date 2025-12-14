#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2724487065167780251LL;
unsigned int var_2 = 3076639585U;
signed char var_4 = (signed char)9;
signed char var_5 = (signed char)19;
long long int var_6 = -6729010237573962428LL;
unsigned char var_8 = (unsigned char)153;
long long int var_9 = 8869182793012944920LL;
unsigned int var_10 = 3165131167U;
int var_12 = 100022746;
unsigned int var_13 = 3143968515U;
int zero = 0;
unsigned long long int var_14 = 1049398880522407872ULL;
short var_15 = (short)31588;
int var_16 = -104689873;
unsigned int var_17 = 283580538U;
unsigned short var_18 = (unsigned short)62406;
signed char var_19 = (signed char)-41;
long long int var_20 = 2228132594466916709LL;
unsigned char var_21 = (unsigned char)22;
unsigned char var_22 = (unsigned char)116;
signed char arr_1 [20] [20] ;
long long int arr_2 [20] ;
signed char arr_3 [20] ;
long long int arr_4 [20] [20] ;
unsigned int arr_5 [20] [20] [20] ;
unsigned short arr_10 [16] [16] ;
unsigned int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 7013017710777412745LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -6845648377560438310LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1752803630U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)2660;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 3595528482U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
