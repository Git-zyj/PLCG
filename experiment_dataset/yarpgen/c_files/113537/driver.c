#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 175691476;
unsigned char var_2 = (unsigned char)112;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3637700038U;
unsigned short var_10 = (unsigned short)8408;
unsigned short var_13 = (unsigned short)21034;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)47727;
int zero = 0;
unsigned long long int var_19 = 17025432868866121991ULL;
int var_20 = 1848514963;
unsigned short var_21 = (unsigned short)9391;
unsigned short var_22 = (unsigned short)10878;
unsigned int var_23 = 2458862255U;
long long int var_24 = -7104407080902243337LL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 3443039968U;
unsigned long long int arr_0 [24] [24] ;
_Bool arr_1 [24] ;
unsigned short arr_3 [23] ;
signed char arr_5 [23] ;
int arr_9 [17] [17] [17] ;
_Bool arr_10 [17] [17] [17] ;
short arr_2 [24] [24] ;
unsigned long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 12299207670124563181ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)49172;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1570398110;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)26477;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 18019216843487492174ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
