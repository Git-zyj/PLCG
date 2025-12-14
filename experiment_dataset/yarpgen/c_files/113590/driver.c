#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9070;
unsigned int var_1 = 3570131536U;
unsigned short var_3 = (unsigned short)48175;
unsigned int var_4 = 2926072656U;
unsigned int var_9 = 2452280675U;
long long int var_10 = 7728482826147876049LL;
long long int var_12 = 5168191273706062054LL;
unsigned long long int var_13 = 56504217670292946ULL;
int zero = 0;
unsigned long long int var_14 = 13994144812040071886ULL;
unsigned int var_15 = 1184863886U;
long long int var_16 = -7763660629224302585LL;
short var_17 = (short)5629;
unsigned int var_18 = 3858322209U;
unsigned int var_19 = 1592033414U;
unsigned char var_20 = (unsigned char)124;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 3629455299521516378ULL;
unsigned int var_23 = 1548716179U;
unsigned int var_24 = 584878642U;
_Bool arr_0 [13] ;
unsigned char arr_1 [13] ;
_Bool arr_2 [13] ;
unsigned long long int arr_3 [13] ;
unsigned long long int arr_4 [13] ;
_Bool arr_5 [13] ;
short arr_6 [13] [13] ;
long long int arr_7 [13] [13] [13] ;
unsigned short arr_8 [13] ;
short arr_9 [13] [13] ;
signed char arr_10 [13] ;
unsigned long long int arr_11 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 10767398177561298986ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 3938721633743508706ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)7746;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -7645238859460849789LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)4682;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-30542;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)52 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 18274096568268523510ULL : 4273507876302188701ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
