#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
long long int var_3 = -1177148272212926193LL;
unsigned short var_4 = (unsigned short)24821;
unsigned int var_5 = 4215991158U;
signed char var_6 = (signed char)-36;
long long int var_7 = -8499895803397077136LL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3065259168U;
unsigned char var_13 = (unsigned char)208;
long long int var_14 = -4670371619144869596LL;
unsigned short var_15 = (unsigned short)59031;
int zero = 0;
unsigned short var_16 = (unsigned short)4384;
long long int var_17 = 8856868302801487488LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3982585060174808552LL;
_Bool arr_0 [15] ;
int arr_1 [15] ;
long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1762613057;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8035867800499955285LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
