#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9005034225422748025LL;
signed char var_2 = (signed char)58;
signed char var_3 = (signed char)28;
int var_4 = 624428419;
long long int var_5 = 3699834709355280291LL;
signed char var_6 = (signed char)5;
int var_11 = -1392690489;
unsigned int var_12 = 661496459U;
unsigned long long int var_14 = 10563420497550046218ULL;
int var_15 = 1930448394;
unsigned short var_17 = (unsigned short)33094;
int zero = 0;
int var_18 = -635712264;
unsigned int var_19 = 1858592420U;
long long int var_20 = -8377758876012729923LL;
unsigned long long int var_21 = 4171336866575748455ULL;
unsigned char var_22 = (unsigned char)96;
signed char arr_1 [19] ;
unsigned int arr_3 [19] ;
signed char arr_4 [19] [19] [19] ;
long long int arr_5 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2804147926U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5887171884886109359LL : 372675623266670309LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
