#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6051217767006108346LL;
long long int var_1 = 5489035416143675396LL;
signed char var_2 = (signed char)-42;
unsigned short var_4 = (unsigned short)15091;
unsigned char var_5 = (unsigned char)184;
unsigned long long int var_6 = 10222995107319070295ULL;
unsigned int var_8 = 2905983613U;
int var_9 = 1072780337;
long long int var_12 = -4441682897717154817LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)63;
unsigned char var_15 = (unsigned char)209;
unsigned char var_16 = (unsigned char)234;
long long int arr_0 [11] ;
unsigned long long int arr_3 [11] [11] [11] ;
_Bool arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6141594257230891624LL : 1859093729195406453LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 988179620431198014ULL : 13768287669621714336ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
