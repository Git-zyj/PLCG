#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15297855336753463014ULL;
unsigned int var_1 = 663784066U;
unsigned char var_2 = (unsigned char)181;
unsigned char var_3 = (unsigned char)187;
unsigned char var_4 = (unsigned char)218;
unsigned char var_6 = (unsigned char)80;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-75;
unsigned char var_10 = (unsigned char)188;
unsigned int var_12 = 3661050673U;
unsigned char var_16 = (unsigned char)106;
long long int var_17 = 2272433890845268703LL;
int zero = 0;
long long int var_19 = 2272761550701157672LL;
unsigned char var_20 = (unsigned char)14;
unsigned long long int var_21 = 4122965710518776951ULL;
signed char var_22 = (signed char)98;
signed char var_23 = (signed char)20;
unsigned char var_24 = (unsigned char)97;
_Bool arr_0 [10] ;
unsigned int arr_1 [10] [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1733760717U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 8880734073422834352ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
