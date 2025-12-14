#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1046621439540097718LL;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)125;
long long int var_7 = -2814043768003859706LL;
unsigned short var_9 = (unsigned short)7225;
int var_10 = 670002316;
signed char var_11 = (signed char)-85;
int zero = 0;
unsigned short var_12 = (unsigned short)21504;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4099161263U;
unsigned short var_15 = (unsigned short)47820;
long long int var_16 = -185494106509235381LL;
long long int var_17 = 8268419479367242720LL;
unsigned char var_18 = (unsigned char)27;
long long int arr_2 [18] [18] ;
short arr_3 [18] [18] ;
signed char arr_5 [16] ;
long long int arr_6 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
long long int arr_10 [25] ;
short arr_11 [25] ;
int arr_15 [25] ;
int arr_18 [25] [25] [25] ;
unsigned short arr_19 [25] [25] [25] [25] ;
long long int arr_4 [18] [18] ;
short arr_9 [16] ;
signed char arr_12 [25] ;
unsigned short arr_13 [25] ;
int arr_22 [10] [10] ;
unsigned long long int arr_23 [10] ;
short arr_24 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 5093885911741721026LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-5215;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 4736151543647948858LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 18446346555442968369ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -7866241514264719817LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)-29266;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = -1891794331;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -830049188;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7700;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -6534634711437549474LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (short)26548;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (unsigned short)6923;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = -1352590746;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = 3675293615649495977ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (short)30719;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
