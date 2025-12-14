#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 872557886U;
unsigned int var_5 = 3614714131U;
unsigned char var_6 = (unsigned char)129;
unsigned int var_7 = 3347969599U;
long long int var_8 = -1044869690223410768LL;
int zero = 0;
long long int var_14 = -102249536868529851LL;
long long int var_15 = -1618040255395005333LL;
unsigned long long int var_16 = 14030786856494545997ULL;
long long int var_17 = -3250941556590191412LL;
unsigned int var_18 = 137549861U;
int arr_0 [22] [22] ;
short arr_1 [22] ;
unsigned int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -351411660;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)8155;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 622496962U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
