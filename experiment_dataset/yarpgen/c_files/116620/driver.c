#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60065;
unsigned long long int var_1 = 11293248352880177726ULL;
_Bool var_2 = (_Bool)1;
int var_3 = -1779066745;
int var_7 = 1394612163;
unsigned char var_8 = (unsigned char)62;
unsigned short var_10 = (unsigned short)9703;
int zero = 0;
unsigned short var_11 = (unsigned short)9001;
signed char var_12 = (signed char)-40;
unsigned char var_13 = (unsigned char)161;
unsigned long long int var_14 = 1835574376193249536ULL;
int var_15 = -1122488140;
short var_16 = (short)9494;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6328265942712035782LL;
signed char var_19 = (signed char)1;
long long int var_20 = -8989966457047815895LL;
int var_21 = 336202477;
unsigned long long int var_22 = 14662431665435794090ULL;
unsigned char var_23 = (unsigned char)174;
int var_24 = -320214144;
unsigned char arr_0 [18] ;
unsigned long long int arr_4 [22] [22] ;
int arr_5 [22] ;
unsigned short arr_6 [22] ;
unsigned long long int arr_12 [14] [14] [14] ;
long long int arr_16 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 8553450808806843558ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 234827848;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)26801;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 8290510511572978784ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 6425851078803316836LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
