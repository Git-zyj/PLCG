#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
signed char var_2 = (signed char)49;
signed char var_5 = (signed char)-54;
signed char var_6 = (signed char)14;
int var_9 = -1205095728;
_Bool var_10 = (_Bool)1;
short var_14 = (short)-2731;
signed char var_15 = (signed char)-77;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)19;
unsigned char var_18 = (unsigned char)20;
int var_19 = 311515572;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 2732291440263665966ULL;
signed char var_23 = (signed char)-53;
signed char var_24 = (signed char)-21;
unsigned int var_25 = 1458580259U;
signed char arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
signed char arr_3 [21] ;
int arr_6 [19] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1729556639;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3652510273U : 128003167U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
