#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)109;
int var_6 = -1528559350;
unsigned char var_7 = (unsigned char)92;
signed char var_8 = (signed char)118;
int var_10 = 388563510;
unsigned long long int var_11 = 7403606377627020233ULL;
unsigned char var_15 = (unsigned char)153;
int var_16 = -1385550258;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5349533785785048457LL;
int zero = 0;
long long int var_20 = -1860368246124210091LL;
signed char var_21 = (signed char)-22;
signed char var_22 = (signed char)-22;
long long int var_23 = 8223844761627987250LL;
long long int var_24 = -3706893007845735696LL;
short var_25 = (short)26441;
long long int var_26 = 1930310756793255700LL;
_Bool arr_0 [16] [16] ;
unsigned short arr_2 [16] [16] ;
unsigned char arr_4 [16] ;
unsigned long long int arr_7 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)19959;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 828849139243417896ULL : 5329116541613919186ULL;
}

void checksum() {
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
