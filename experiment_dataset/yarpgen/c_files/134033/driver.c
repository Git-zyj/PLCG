#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1526743511U;
unsigned short var_1 = (unsigned short)27820;
short var_2 = (short)-24113;
short var_3 = (short)15917;
short var_4 = (short)28456;
unsigned int var_5 = 3215396472U;
long long int var_6 = 384655969643851461LL;
unsigned char var_7 = (unsigned char)63;
unsigned int var_8 = 825694375U;
int var_10 = 1003183621;
short var_11 = (short)-14893;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)32426;
long long int var_14 = 2607438122478032377LL;
short var_15 = (short)26618;
signed char var_16 = (signed char)-27;
unsigned int var_17 = 1086487960U;
unsigned long long int arr_0 [12] ;
signed char arr_2 [12] [12] ;
unsigned long long int arr_4 [12] ;
_Bool arr_5 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 721371045243456108ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 10230080929831240876ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
