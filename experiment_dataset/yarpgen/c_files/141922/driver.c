#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32464;
long long int var_3 = -6863317955648979503LL;
signed char var_4 = (signed char)-39;
signed char var_6 = (signed char)-42;
long long int var_7 = 9171695957967774084LL;
unsigned long long int var_10 = 7794591703529723920ULL;
unsigned int var_13 = 365865528U;
unsigned long long int var_15 = 13649032582704477816ULL;
signed char var_16 = (signed char)118;
int zero = 0;
unsigned int var_18 = 3932867315U;
short var_19 = (short)-6450;
short var_20 = (short)-20616;
unsigned char arr_2 [22] ;
unsigned long long int arr_3 [22] ;
unsigned int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2185337126353703422ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2334259424U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
