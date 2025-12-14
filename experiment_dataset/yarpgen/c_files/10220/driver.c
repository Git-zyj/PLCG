#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
int var_3 = -1294352745;
unsigned int var_4 = 2027576839U;
long long int var_8 = 1658934449489356983LL;
long long int var_12 = -1557365476202289100LL;
signed char var_13 = (signed char)63;
unsigned int var_14 = 978035558U;
unsigned int var_18 = 2909472846U;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5120783909206569086LL;
signed char var_22 = (signed char)21;
signed char var_23 = (signed char)124;
unsigned int var_24 = 1770626862U;
unsigned long long int arr_0 [10] ;
long long int arr_1 [10] ;
_Bool arr_2 [10] ;
long long int arr_3 [10] ;
int arr_8 [10] ;
_Bool arr_12 [10] [10] [10] [10] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 5624914916743900290ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3265509304590110021LL : -19510802676506937LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -3924962450315063LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1604118134;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)241 : (unsigned char)88;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
