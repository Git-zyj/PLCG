#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1409716650U;
unsigned long long int var_1 = 13240603830804312054ULL;
short var_3 = (short)24438;
unsigned short var_6 = (unsigned short)29402;
unsigned long long int var_7 = 13598427535770965610ULL;
unsigned char var_8 = (unsigned char)175;
unsigned short var_9 = (unsigned short)39423;
unsigned long long int var_10 = 832010964211198881ULL;
short var_11 = (short)11591;
short var_12 = (short)16878;
unsigned long long int var_13 = 8514220590632710607ULL;
short var_14 = (short)-32222;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14652565818117515501ULL;
int zero = 0;
signed char var_18 = (signed char)36;
unsigned long long int var_19 = 7044793949105552932ULL;
unsigned int var_20 = 1711858832U;
unsigned char var_21 = (unsigned char)208;
_Bool var_22 = (_Bool)1;
signed char arr_0 [19] ;
signed char arr_2 [19] [19] ;
short arr_3 [19] [19] ;
int arr_4 [19] [19] [19] ;
unsigned char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)7721;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 243476990 : 1756607140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)139 : (unsigned char)237;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
