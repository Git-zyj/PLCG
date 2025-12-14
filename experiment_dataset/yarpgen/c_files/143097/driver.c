#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned int var_3 = 3031646646U;
int var_5 = 867433833;
unsigned char var_6 = (unsigned char)95;
int var_10 = -724385203;
unsigned long long int var_11 = 3458941887478087241ULL;
int var_12 = 719228727;
int zero = 0;
signed char var_19 = (signed char)-12;
int var_20 = 1821059304;
unsigned int var_21 = 2490398119U;
long long int var_22 = -1331061583075807387LL;
unsigned short var_23 = (unsigned short)23806;
unsigned long long int var_24 = 2896837475009550039ULL;
long long int var_25 = -8897275308975778494LL;
unsigned char var_26 = (unsigned char)235;
unsigned char var_27 = (unsigned char)242;
short var_28 = (short)-2074;
signed char var_29 = (signed char)-93;
unsigned int var_30 = 128904876U;
_Bool var_31 = (_Bool)1;
long long int var_32 = 494325747947926373LL;
long long int arr_1 [21] [21] ;
unsigned int arr_2 [21] [21] [21] ;
unsigned int arr_4 [21] [21] [21] ;
long long int arr_10 [21] [21] [21] [21] [21] ;
unsigned int arr_11 [21] [21] [21] [21] ;
unsigned int arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -8036589630955625078LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1885641847U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3919975475U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 7727489205679171924LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 660290536U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 1913014797U;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
