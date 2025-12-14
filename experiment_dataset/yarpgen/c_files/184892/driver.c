#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5226189741750677535ULL;
signed char var_1 = (signed char)120;
unsigned int var_2 = 2810986906U;
short var_3 = (short)5914;
unsigned long long int var_4 = 1006005197220989734ULL;
signed char var_5 = (signed char)73;
unsigned short var_6 = (unsigned short)9780;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)0;
unsigned long long int var_9 = 625977632086373601ULL;
unsigned char var_10 = (unsigned char)117;
short var_11 = (short)28909;
int var_13 = 1573400863;
long long int var_14 = 6716933837785478790LL;
signed char var_15 = (signed char)-17;
long long int var_17 = -7860986176694656291LL;
signed char var_19 = (signed char)-41;
int zero = 0;
int var_20 = 2146788894;
int var_21 = -423422664;
unsigned long long int var_22 = 1413301211417022931ULL;
signed char var_23 = (signed char)88;
unsigned long long int arr_2 [20] [20] ;
unsigned long long int arr_5 [13] [13] ;
unsigned long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 10510105184514463344ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1903501735893584609ULL : 15331827836959942025ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4929786150742268031ULL : 8373089347557965892ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
