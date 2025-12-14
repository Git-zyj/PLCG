#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27519;
signed char var_3 = (signed char)-100;
unsigned char var_5 = (unsigned char)129;
long long int var_10 = 5550632064576783063LL;
int zero = 0;
unsigned char var_14 = (unsigned char)133;
unsigned char var_15 = (unsigned char)38;
signed char var_16 = (signed char)-14;
unsigned char var_17 = (unsigned char)9;
unsigned char var_18 = (unsigned char)121;
unsigned char var_19 = (unsigned char)156;
long long int var_20 = 678603562690966983LL;
unsigned long long int arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
long long int arr_4 [22] [22] [22] ;
long long int arr_7 [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 17625410121759730644ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)26326;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -7717268224202078697LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -7403001890825530941LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 6960801159192734532ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
