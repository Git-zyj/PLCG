#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
signed char var_3 = (signed char)-114;
unsigned int var_4 = 1907592623U;
unsigned short var_5 = (unsigned short)35060;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 13571440861467175739ULL;
long long int var_10 = -4051747910653270269LL;
int zero = 0;
unsigned short var_12 = (unsigned short)12451;
int var_13 = -776402900;
unsigned short var_14 = (unsigned short)25629;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)68;
signed char var_17 = (signed char)19;
short arr_0 [17] [17] ;
_Bool arr_1 [17] ;
long long int arr_2 [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)11625;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -8803936847640523309LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)9;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
