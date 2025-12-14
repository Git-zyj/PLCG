#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-27753;
int var_8 = 1205274980;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
long long int var_13 = 3474337597396400920LL;
long long int var_14 = -4294911020973939012LL;
unsigned char var_15 = (unsigned char)73;
unsigned char var_16 = (unsigned char)100;
long long int var_17 = 7037743065806727446LL;
unsigned int var_18 = 1810733188U;
unsigned long long int var_19 = 1113156618206750907ULL;
unsigned char var_20 = (unsigned char)207;
long long int arr_0 [20] ;
unsigned int arr_1 [20] ;
signed char arr_6 [25] ;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 4349446482104971879LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 27696286U : 1991660278U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23329 : (unsigned short)45723;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
