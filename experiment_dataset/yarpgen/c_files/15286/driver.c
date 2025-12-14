#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -754877478;
short var_2 = (short)-15409;
unsigned short var_3 = (unsigned short)18113;
long long int var_7 = -552150144136846593LL;
unsigned long long int var_13 = 11879233513670808272ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)182;
short var_15 = (short)1261;
unsigned short var_16 = (unsigned short)7328;
long long int var_17 = -5395900705642678277LL;
long long int var_18 = 1886135375097824152LL;
signed char var_19 = (signed char)-85;
long long int arr_0 [12] ;
signed char arr_1 [12] ;
signed char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -8428825890608850707LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)10;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
