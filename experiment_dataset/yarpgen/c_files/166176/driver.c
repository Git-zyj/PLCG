#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9063147250427145672ULL;
unsigned short var_1 = (unsigned short)50577;
unsigned int var_12 = 2777909259U;
unsigned char var_14 = (unsigned char)107;
int zero = 0;
unsigned int var_15 = 2594605036U;
unsigned short var_16 = (unsigned short)22630;
unsigned char var_17 = (unsigned char)66;
unsigned int var_18 = 2973329852U;
long long int var_19 = -4526546387648799909LL;
unsigned short var_20 = (unsigned short)26431;
long long int arr_3 [19] ;
signed char arr_4 [19] ;
unsigned long long int arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -6391130051363241628LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 15014010200370343597ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
