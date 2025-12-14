#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 8435646735819047979ULL;
signed char var_3 = (signed char)-17;
unsigned long long int var_4 = 12631642233867411253ULL;
signed char var_7 = (signed char)-15;
unsigned char var_8 = (unsigned char)38;
signed char var_9 = (signed char)53;
int var_10 = -581331940;
int zero = 0;
unsigned char var_11 = (unsigned char)169;
unsigned int var_12 = 2876927509U;
signed char var_13 = (signed char)23;
long long int var_14 = 6341238270307080802LL;
signed char var_15 = (signed char)-108;
unsigned long long int arr_0 [14] ;
signed char arr_2 [14] ;
unsigned char arr_7 [14] [14] ;
unsigned short arr_11 [14] ;
unsigned long long int arr_13 [14] [14] [14] [14] ;
unsigned int arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 12158814706615475907ULL : 17758867436079023674ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)3 : (signed char)31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10901 : (unsigned short)15380;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7071582951961617345ULL : 1688162450391480295ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3933086210U : 237488881U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
