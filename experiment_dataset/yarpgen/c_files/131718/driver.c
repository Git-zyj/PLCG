#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
signed char var_2 = (signed char)-62;
signed char var_4 = (signed char)53;
signed char var_7 = (signed char)114;
signed char var_14 = (signed char)78;
signed char var_18 = (signed char)19;
signed char var_19 = (signed char)84;
int zero = 0;
signed char var_20 = (signed char)-54;
signed char var_21 = (signed char)-126;
signed char var_22 = (signed char)-21;
signed char var_23 = (signed char)-53;
signed char var_24 = (signed char)-90;
signed char arr_2 [18] ;
signed char arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)-14;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
