#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6116;
unsigned int var_1 = 817780667U;
unsigned long long int var_5 = 15524503406009322413ULL;
unsigned char var_9 = (unsigned char)52;
short var_11 = (short)4462;
unsigned int var_17 = 3035140512U;
int zero = 0;
short var_19 = (short)1339;
long long int var_20 = -5704754431583126573LL;
signed char var_21 = (signed char)-56;
int var_22 = -1557562865;
unsigned int var_23 = 1828738299U;
short var_24 = (short)32023;
short arr_0 [17] ;
long long int arr_2 [17] ;
unsigned int arr_3 [17] ;
unsigned int arr_4 [17] [17] [17] ;
short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-19922 : (short)-14623;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -720808877980636573LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 446658733U : 3951200031U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3704701359U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)6640 : (short)25049;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
