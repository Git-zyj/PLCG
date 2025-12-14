#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
signed char var_1 = (signed char)22;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)17;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-26;
unsigned char var_8 = (unsigned char)37;
unsigned short var_9 = (unsigned short)22889;
unsigned char var_10 = (unsigned char)196;
int var_11 = -1674013604;
int zero = 0;
signed char var_12 = (signed char)-109;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-49;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)240;
signed char var_17 = (signed char)-105;
unsigned long long int var_18 = 8791012923999926490ULL;
int var_19 = -1986823767;
signed char var_20 = (signed char)-102;
int arr_2 [11] [11] ;
unsigned long long int arr_8 [12] [12] ;
int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -1916382405;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 12048149217318770382ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1652381496 : 352684019;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
