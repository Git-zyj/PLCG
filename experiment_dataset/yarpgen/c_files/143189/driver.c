#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2017742209U;
unsigned int var_1 = 2334564247U;
long long int var_2 = 7442251611411903518LL;
long long int var_3 = 6890631169512415115LL;
unsigned long long int var_4 = 14434000253278074362ULL;
unsigned long long int var_5 = 10383222579353901157ULL;
signed char var_6 = (signed char)-4;
int zero = 0;
int var_10 = 1683595566;
long long int var_11 = 1440924035396419916LL;
_Bool var_12 = (_Bool)0;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 7577973140271327721ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9986667510741073306ULL : 10142821135307149642ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 6827830041941530390ULL : 2430526414955372363ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
