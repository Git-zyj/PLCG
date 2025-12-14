#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27172;
unsigned long long int var_4 = 11739520343527002040ULL;
unsigned short var_10 = (unsigned short)13565;
long long int var_13 = -4263656149593318449LL;
int zero = 0;
long long int var_15 = 7091466768741814304LL;
int var_16 = -572417958;
unsigned long long int var_17 = 7769042475962171985ULL;
unsigned short var_18 = (unsigned short)9836;
unsigned char var_19 = (unsigned char)224;
short var_20 = (short)-14648;
signed char arr_1 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 7397603141429701133ULL : 110507448139673ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
