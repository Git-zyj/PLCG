#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16759;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)47;
unsigned char var_10 = (unsigned char)241;
unsigned int var_11 = 1209611483U;
unsigned int var_12 = 1470444328U;
unsigned long long int var_13 = 13923047948304360736ULL;
unsigned long long int var_14 = 5112263717666248377ULL;
unsigned long long int var_16 = 7636653377835126815ULL;
long long int var_17 = 8338388297027805662LL;
int zero = 0;
unsigned int var_18 = 3713464854U;
unsigned char var_19 = (unsigned char)208;
unsigned long long int var_20 = 5206716402995110961ULL;
int var_21 = -1410040507;
unsigned long long int var_22 = 17484721400549654541ULL;
unsigned short var_23 = (unsigned short)30783;
unsigned short arr_1 [17] ;
int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)306;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1557740333;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
