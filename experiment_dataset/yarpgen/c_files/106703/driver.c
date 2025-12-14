#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3480145488U;
short var_1 = (short)-1739;
long long int var_2 = -3111387522581903020LL;
signed char var_3 = (signed char)-105;
long long int var_4 = 5059505517410603168LL;
unsigned int var_5 = 1559501965U;
short var_7 = (short)-20334;
short var_8 = (short)-31767;
unsigned char var_9 = (unsigned char)62;
int var_10 = -120908783;
int zero = 0;
unsigned int var_11 = 3652099887U;
short var_12 = (short)-15224;
int var_13 = -1345485882;
unsigned long long int var_14 = 7723032896262891181ULL;
signed char var_15 = (signed char)32;
unsigned int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
unsigned long long int arr_2 [16] ;
unsigned char arr_3 [16] ;
unsigned long long int arr_9 [20] ;
unsigned short arr_10 [20] ;
unsigned int arr_4 [16] ;
int arr_7 [14] ;
long long int arr_8 [14] ;
short arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3311572572U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)48941;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 13559672081808071392ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 12913066663060975259ULL : 7456242137565829574ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)59138;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 2147339676U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -1209515175;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -8528356371763329207LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)30668 : (short)30417;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
