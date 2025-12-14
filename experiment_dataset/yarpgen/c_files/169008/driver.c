#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)130;
long long int var_2 = -498890601464018159LL;
unsigned char var_3 = (unsigned char)190;
unsigned int var_4 = 2942140593U;
unsigned int var_5 = 951721603U;
unsigned int var_6 = 215170576U;
int var_7 = -900479384;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)255;
unsigned char var_10 = (unsigned char)158;
unsigned int var_11 = 2662560045U;
int var_13 = 1254910573;
unsigned short var_14 = (unsigned short)26416;
int var_15 = 1662652156;
unsigned short var_16 = (unsigned short)11000;
long long int var_17 = 544106400884491768LL;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
long long int var_20 = 4182080290346358914LL;
unsigned int var_21 = 569117812U;
unsigned char var_22 = (unsigned char)187;
unsigned int var_23 = 1706392406U;
int var_24 = 1077208603;
unsigned long long int arr_2 [25] [25] ;
long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 17664116717148107281ULL : 8532704322684484206ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -8099442379460949885LL : 1971594139656922925LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
