#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29843;
int var_4 = 814839440;
unsigned char var_9 = (unsigned char)17;
unsigned long long int var_11 = 7904452853240282714ULL;
long long int var_14 = -4856363711158202689LL;
int zero = 0;
unsigned short var_16 = (unsigned short)30372;
unsigned long long int var_17 = 12404386703414736826ULL;
short var_18 = (short)10664;
short var_19 = (short)-11122;
unsigned long long int var_20 = 11468451097831167634ULL;
long long int arr_1 [10] ;
unsigned int arr_2 [10] ;
short arr_5 [21] ;
unsigned long long int arr_6 [21] [21] ;
unsigned long long int arr_4 [10] ;
int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 356342382774365297LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3678409237U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-19257;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 5088588758025425337ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 7235661392538094164ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -722631163;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
