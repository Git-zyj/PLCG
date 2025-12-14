#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9004052379329347661LL;
unsigned char var_4 = (unsigned char)21;
int var_5 = 1651466234;
unsigned char var_6 = (unsigned char)156;
long long int var_7 = 9040694335412392992LL;
int var_10 = 321480888;
short var_12 = (short)-27206;
long long int var_13 = 9008496434394327568LL;
unsigned int var_14 = 138790445U;
int var_15 = 714947443;
unsigned int var_16 = 3214883496U;
long long int var_17 = 5661254447098181448LL;
unsigned int var_18 = 1355896105U;
int zero = 0;
unsigned long long int var_20 = 13918669690032094053ULL;
_Bool var_21 = (_Bool)1;
int var_22 = 1124009476;
short var_23 = (short)20575;
unsigned int var_24 = 3905638286U;
unsigned char var_25 = (unsigned char)131;
unsigned short var_26 = (unsigned short)51452;
long long int arr_0 [17] [17] ;
_Bool arr_1 [17] [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -5546385258581524106LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)76;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
