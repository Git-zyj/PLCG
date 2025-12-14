#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned long long int var_1 = 11524123357906614738ULL;
short var_2 = (short)-31322;
_Bool var_3 = (_Bool)0;
int var_5 = 1955559649;
unsigned char var_6 = (unsigned char)93;
unsigned short var_7 = (unsigned short)50241;
short var_10 = (short)3442;
signed char var_13 = (signed char)75;
int zero = 0;
signed char var_14 = (signed char)-2;
short var_15 = (short)5077;
long long int var_16 = -341236272188261019LL;
unsigned short var_17 = (unsigned short)37339;
signed char var_18 = (signed char)87;
signed char var_19 = (signed char)-54;
unsigned long long int var_20 = 12976002407552590421ULL;
unsigned short var_21 = (unsigned short)25003;
unsigned char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
short arr_3 [20] ;
short arr_5 [16] ;
short arr_8 [16] ;
unsigned char arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 7428009162722514348ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-26741 : (short)-3391;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-22614;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)-20274;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)151;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
