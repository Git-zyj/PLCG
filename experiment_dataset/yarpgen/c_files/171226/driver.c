#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15977;
short var_2 = (short)19561;
short var_3 = (short)16241;
long long int var_4 = -7810974753614483535LL;
short var_5 = (short)-19072;
unsigned char var_7 = (unsigned char)254;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 11772289033816319006ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4039413110089096891LL;
unsigned int var_14 = 1951718032U;
short var_15 = (short)-10903;
unsigned short var_16 = (unsigned short)41695;
unsigned int arr_1 [24] ;
long long int arr_2 [24] ;
unsigned char arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2454101746U : 601846929U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3906482190264743474LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)97 : (unsigned char)202;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
