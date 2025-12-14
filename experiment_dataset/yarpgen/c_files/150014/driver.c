#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
unsigned int var_2 = 1398426604U;
unsigned char var_3 = (unsigned char)219;
unsigned int var_5 = 2747772273U;
int var_6 = 1522405140;
unsigned long long int var_7 = 13884140567448708619ULL;
unsigned int var_9 = 2975266879U;
unsigned short var_10 = (unsigned short)518;
signed char var_12 = (signed char)-115;
int var_13 = 10124877;
unsigned int var_14 = 3763198854U;
unsigned char var_15 = (unsigned char)90;
long long int var_16 = 1683962690883791068LL;
signed char var_18 = (signed char)46;
int zero = 0;
unsigned char var_19 = (unsigned char)114;
long long int var_20 = 574072553127132760LL;
unsigned long long int var_21 = 8200513759974889614ULL;
signed char var_22 = (signed char)-95;
int var_23 = -477503339;
short var_24 = (short)-2608;
unsigned char var_25 = (unsigned char)17;
_Bool arr_1 [20] ;
long long int arr_2 [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1004665853745016965LL : -997761412933253252LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4770929334787715118LL : 77075242193202372LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
