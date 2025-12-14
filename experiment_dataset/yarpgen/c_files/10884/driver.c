#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51471;
unsigned char var_7 = (unsigned char)204;
long long int var_9 = -3644354836105247141LL;
unsigned short var_11 = (unsigned short)46300;
unsigned int var_12 = 3118187762U;
unsigned short var_14 = (unsigned short)19592;
unsigned short var_15 = (unsigned short)32112;
int zero = 0;
long long int var_20 = -3504383365097899774LL;
unsigned short var_21 = (unsigned short)52614;
unsigned long long int var_22 = 7947109055655766272ULL;
unsigned short var_23 = (unsigned short)37756;
signed char var_24 = (signed char)102;
unsigned int var_25 = 3279196615U;
long long int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_4 [24] ;
unsigned long long int arr_6 [24] ;
unsigned int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -1096665760365769381LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 17704938041419285586ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2234953015U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 15620550181508329050ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 3562860690U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
