#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1577226777;
signed char var_1 = (signed char)-46;
int var_2 = -1068756825;
signed char var_3 = (signed char)112;
unsigned long long int var_5 = 114294981822086037ULL;
signed char var_6 = (signed char)105;
long long int var_7 = 1173880380549180006LL;
int zero = 0;
short var_10 = (short)10819;
unsigned int var_11 = 2102745727U;
unsigned short var_12 = (unsigned short)9281;
short var_13 = (short)-32225;
long long int var_14 = 5156319063495777387LL;
int var_15 = 1925766813;
unsigned long long int var_16 = 5174369089352352669ULL;
long long int var_17 = -1146038027255489075LL;
unsigned char var_18 = (unsigned char)235;
unsigned char var_19 = (unsigned char)62;
int arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned short arr_2 [19] ;
long long int arr_6 [19] [19] [19] [19] ;
short arr_12 [19] ;
_Bool arr_16 [24] [24] ;
unsigned long long int arr_17 [24] [24] ;
int arr_3 [19] ;
unsigned char arr_18 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1253129304;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)9766;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 5109725648841294027LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (short)18860;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = 2643156432635469023ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1679022103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (unsigned char)145;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
