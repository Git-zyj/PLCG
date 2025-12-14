#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
unsigned char var_3 = (unsigned char)107;
unsigned char var_4 = (unsigned char)211;
long long int var_5 = 8871627991171985979LL;
unsigned long long int var_6 = 346557856705011151ULL;
unsigned short var_7 = (unsigned short)16949;
unsigned int var_11 = 2381173407U;
int var_12 = -1401153529;
unsigned char var_13 = (unsigned char)168;
_Bool var_14 = (_Bool)1;
short var_15 = (short)21625;
signed char var_17 = (signed char)-85;
short var_19 = (short)12933;
int zero = 0;
unsigned long long int var_20 = 15003975607233351527ULL;
unsigned int var_21 = 4192402699U;
long long int var_22 = 56431533280935613LL;
short arr_1 [17] ;
unsigned long long int arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)29990;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 5586785350081598995ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
