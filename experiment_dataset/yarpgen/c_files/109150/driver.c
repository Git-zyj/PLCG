#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2623377215852347099ULL;
unsigned long long int var_3 = 15545404873265628101ULL;
unsigned char var_4 = (unsigned char)10;
unsigned short var_5 = (unsigned short)17883;
unsigned long long int var_7 = 5750150038331467247ULL;
unsigned short var_10 = (unsigned short)20217;
int var_11 = -1796309944;
int var_12 = 1441120880;
signed char var_13 = (signed char)-69;
int zero = 0;
unsigned int var_17 = 460304705U;
short var_18 = (short)-30864;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 585478122552926095ULL;
unsigned char var_21 = (unsigned char)119;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
int var_24 = 189312558;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-11985;
unsigned short var_27 = (unsigned short)3908;
unsigned long long int var_28 = 15615847130784697892ULL;
unsigned long long int arr_0 [18] [18] ;
unsigned int arr_2 [18] [18] ;
signed char arr_16 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 15505357151605721177ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3907145308U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)124;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
