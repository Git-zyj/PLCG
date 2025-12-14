#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31094;
short var_2 = (short)-15160;
signed char var_3 = (signed char)87;
unsigned int var_4 = 3046518165U;
unsigned long long int var_6 = 11883977127656893099ULL;
signed char var_7 = (signed char)13;
unsigned short var_9 = (unsigned short)59356;
int zero = 0;
signed char var_11 = (signed char)83;
short var_12 = (short)29747;
short var_13 = (short)27221;
unsigned long long int var_14 = 1685918960010114507ULL;
unsigned int var_15 = 915988306U;
short var_16 = (short)9955;
unsigned short var_17 = (unsigned short)7083;
short var_18 = (short)-6291;
long long int var_19 = -2238385450606323183LL;
unsigned char var_20 = (unsigned char)46;
signed char arr_2 [17] [17] ;
unsigned long long int arr_6 [17] [17] [17] ;
long long int arr_12 [25] [25] ;
short arr_13 [25] ;
unsigned int arr_14 [25] ;
long long int arr_19 [18] ;
long long int arr_20 [18] ;
unsigned int arr_21 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7785685565502537303ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -8583722116136436008LL : 6221935763505089088LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)18663 : (short)-26693;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2540601787U : 1432112509U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = -9199890559154405269LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 7927207598380257890LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 3694854943U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
