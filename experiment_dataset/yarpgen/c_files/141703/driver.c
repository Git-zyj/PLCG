#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9784141953607100373ULL;
unsigned long long int var_1 = 15586145129378224970ULL;
int var_4 = 1241320582;
long long int var_5 = 3118824938494350057LL;
int var_6 = -1244908083;
signed char var_7 = (signed char)31;
unsigned int var_13 = 2718787815U;
int zero = 0;
unsigned char var_15 = (unsigned char)174;
unsigned char var_16 = (unsigned char)27;
unsigned short var_17 = (unsigned short)53296;
unsigned int var_18 = 364229257U;
short var_19 = (short)3347;
unsigned int var_20 = 3194749353U;
unsigned char var_21 = (unsigned char)246;
unsigned char var_22 = (unsigned char)118;
long long int arr_1 [10] ;
signed char arr_5 [10] ;
unsigned int arr_6 [10] [10] [10] ;
unsigned char arr_19 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2680245817234468256LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1043685033U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (unsigned char)65;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
