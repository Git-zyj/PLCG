#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4383814942082036432LL;
unsigned long long int var_2 = 7758454876464334491ULL;
int var_4 = 226032676;
unsigned char var_9 = (unsigned char)170;
long long int var_10 = 8880043070405859887LL;
unsigned int var_12 = 1691813079U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)108;
int var_15 = 1017172239;
int var_16 = -2145880240;
int var_17 = 2139728208;
unsigned int var_18 = 1175234583U;
unsigned long long int var_19 = 16596074903797914547ULL;
signed char var_20 = (signed char)-81;
unsigned short var_21 = (unsigned short)21299;
unsigned int var_22 = 2653352756U;
short var_23 = (short)26204;
unsigned char var_24 = (unsigned char)64;
unsigned long long int arr_1 [23] ;
long long int arr_3 [24] ;
signed char arr_4 [24] [24] ;
unsigned int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 15469241105541682949ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1704818267650271363LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 89213015U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
