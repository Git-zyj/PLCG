#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
signed char var_1 = (signed char)47;
long long int var_2 = 6990529257468473739LL;
long long int var_3 = 199086988342657727LL;
long long int var_5 = -2815739887064246090LL;
long long int var_8 = 1318073041539753054LL;
unsigned short var_9 = (unsigned short)41769;
long long int var_10 = -3684795727150144051LL;
unsigned short var_11 = (unsigned short)32622;
signed char var_12 = (signed char)120;
signed char var_13 = (signed char)47;
int zero = 0;
long long int var_14 = -7429555640213563543LL;
signed char var_15 = (signed char)-107;
unsigned short var_16 = (unsigned short)11728;
signed char var_17 = (signed char)75;
long long int var_18 = -892147908870588761LL;
unsigned short arr_4 [24] ;
signed char arr_3 [12] ;
long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)2362;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)12 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -5322725981600413811LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
