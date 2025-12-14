#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8846942258006974621LL;
signed char var_3 = (signed char)77;
long long int var_5 = -7261185391029567323LL;
long long int var_7 = -2755526979648408451LL;
signed char var_9 = (signed char)114;
long long int var_10 = 2556445145446599854LL;
signed char var_12 = (signed char)-64;
long long int var_13 = -731004235447116756LL;
signed char var_16 = (signed char)-85;
int zero = 0;
signed char var_18 = (signed char)-32;
signed char var_19 = (signed char)91;
signed char var_20 = (signed char)1;
signed char var_21 = (signed char)-107;
long long int var_22 = 7924152961483930509LL;
long long int var_23 = -3286908518193666194LL;
long long int var_24 = 4379060462463402663LL;
signed char arr_2 [20] ;
signed char arr_3 [20] ;
long long int arr_5 [21] ;
long long int arr_7 [21] ;
signed char arr_4 [20] ;
long long int arr_8 [21] ;
long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -3730940577448048767LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -4969872352905764271LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 6845822476928741305LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 1800589814400526025LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
