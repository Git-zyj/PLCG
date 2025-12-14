#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)83;
signed char var_3 = (signed char)20;
signed char var_6 = (signed char)50;
unsigned short var_7 = (unsigned short)13144;
unsigned long long int var_8 = 13566979247014346929ULL;
unsigned short var_10 = (unsigned short)62643;
int var_12 = 1845694208;
int var_13 = -582237863;
unsigned long long int var_15 = 16233627662731975130ULL;
int zero = 0;
unsigned long long int var_16 = 2400512235391955349ULL;
signed char var_17 = (signed char)-103;
unsigned short var_18 = (unsigned short)13104;
long long int var_19 = 3857719508972963296LL;
unsigned int var_20 = 1387769663U;
signed char arr_5 [22] [22] [22] ;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -561338504249674137LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
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
