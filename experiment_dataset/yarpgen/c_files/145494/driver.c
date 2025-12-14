#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
int var_1 = 283147136;
_Bool var_2 = (_Bool)0;
int var_3 = -520502981;
long long int var_4 = 3095824159681790561LL;
unsigned char var_6 = (unsigned char)136;
signed char var_7 = (signed char)123;
unsigned int var_8 = 2562092450U;
long long int var_9 = -4674958551776682130LL;
int var_10 = 1182794829;
int zero = 0;
signed char var_12 = (signed char)112;
short var_13 = (short)2345;
int var_14 = -1449610404;
int var_15 = -1682288911;
int var_16 = -393642557;
short var_17 = (short)28021;
unsigned char var_18 = (unsigned char)166;
unsigned short arr_0 [12] [12] ;
signed char arr_2 [12] ;
signed char arr_4 [12] [12] ;
long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)16100;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 3407919209104669999LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
