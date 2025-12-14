#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 309378914400778756ULL;
unsigned long long int var_1 = 18109699419575545657ULL;
short var_2 = (short)-23496;
signed char var_4 = (signed char)-77;
signed char var_5 = (signed char)-19;
unsigned long long int var_11 = 7792225081627198635ULL;
unsigned short var_12 = (unsigned short)56225;
int zero = 0;
short var_13 = (short)23156;
signed char var_14 = (signed char)-116;
unsigned short var_15 = (unsigned short)1227;
short var_16 = (short)-21852;
unsigned long long int var_17 = 18288867483876659987ULL;
unsigned short arr_0 [18] ;
int arr_2 [18] [18] ;
short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)30720;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1289685989 : -2028387019;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-8299;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
