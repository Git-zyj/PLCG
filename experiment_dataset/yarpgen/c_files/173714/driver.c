#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13608372484278869330ULL;
unsigned long long int var_3 = 4826022915675166703ULL;
unsigned long long int var_4 = 11021944899001358857ULL;
long long int var_5 = 6214394320405408105LL;
signed char var_6 = (signed char)-115;
unsigned long long int var_14 = 9290807847256844768ULL;
int zero = 0;
long long int var_19 = -3452816491372612059LL;
_Bool var_20 = (_Bool)0;
int var_21 = 888665042;
long long int var_22 = -4023185217865660537LL;
_Bool var_23 = (_Bool)1;
long long int var_24 = -5801642742192221319LL;
_Bool var_25 = (_Bool)0;
unsigned char arr_2 [11] [11] [11] ;
long long int arr_4 [11] [11] ;
long long int arr_8 [20] ;
short arr_10 [20] ;
unsigned short arr_11 [20] [20] [20] ;
unsigned long long int arr_12 [20] ;
unsigned long long int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)119 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 3017547583675932937LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 8911136233695336023LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)21514;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)26736;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 17952604260547994417ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 14226844684999670306ULL : 16998894238365896687ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
