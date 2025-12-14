#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
long long int var_1 = -8053930157131530572LL;
unsigned char var_2 = (unsigned char)226;
long long int var_4 = -8546762414662882279LL;
unsigned char var_5 = (unsigned char)198;
signed char var_6 = (signed char)-110;
signed char var_7 = (signed char)-16;
long long int var_8 = 5701774141576454289LL;
long long int var_9 = -3448837732308623657LL;
int zero = 0;
unsigned char var_10 = (unsigned char)246;
long long int var_11 = 994982628944153518LL;
long long int var_12 = 6633855803162467159LL;
unsigned char var_13 = (unsigned char)110;
unsigned char var_14 = (unsigned char)147;
signed char var_15 = (signed char)23;
unsigned char var_16 = (unsigned char)174;
unsigned char var_17 = (unsigned char)140;
signed char var_18 = (signed char)-90;
long long int var_19 = -8750914054647796698LL;
signed char var_20 = (signed char)120;
signed char var_21 = (signed char)-91;
unsigned char var_22 = (unsigned char)17;
long long int var_23 = 7431058026739815637LL;
signed char var_24 = (signed char)65;
signed char var_25 = (signed char)52;
signed char var_26 = (signed char)43;
signed char arr_0 [23] ;
long long int arr_1 [23] [23] ;
signed char arr_2 [23] ;
long long int arr_5 [23] [23] ;
unsigned char arr_6 [23] ;
unsigned char arr_10 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 818772064887462031LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -179422200354314212LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)125;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
