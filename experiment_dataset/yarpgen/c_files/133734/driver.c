#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -104860907;
short var_4 = (short)-4919;
int var_6 = -253017394;
unsigned short var_7 = (unsigned short)3915;
short var_8 = (short)6191;
unsigned int var_9 = 2452485497U;
long long int var_10 = -7177144452509315564LL;
unsigned long long int var_12 = 1800524827187713836ULL;
unsigned long long int var_14 = 10367123321969529287ULL;
short var_17 = (short)-4584;
int zero = 0;
unsigned int var_18 = 2984206126U;
int var_19 = -1409824945;
unsigned int var_20 = 2633568201U;
unsigned long long int var_21 = 15581081656502485109ULL;
unsigned char var_22 = (unsigned char)237;
unsigned short var_23 = (unsigned short)56517;
unsigned short var_24 = (unsigned short)34578;
unsigned int var_25 = 2806522548U;
int arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
unsigned int arr_2 [21] ;
short arr_3 [21] [21] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 489979820;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 229818100U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1342315646U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)8694;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -788292130;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
