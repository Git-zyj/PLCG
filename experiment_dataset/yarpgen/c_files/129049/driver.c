#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 987083500381752733LL;
unsigned short var_3 = (unsigned short)20304;
signed char var_4 = (signed char)60;
unsigned long long int var_5 = 11275253329593458308ULL;
unsigned int var_7 = 2468788437U;
long long int var_11 = -3668673874240185237LL;
unsigned int var_12 = 772726475U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-19331;
int zero = 0;
unsigned long long int var_15 = 2990961537079011502ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2462118586U;
long long int var_18 = -1779897797565796458LL;
unsigned short var_19 = (unsigned short)31573;
unsigned long long int arr_0 [17] ;
int arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 6336749823780678558ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 761048479;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1148810812U : 612371555U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 484805070;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11274702315064232558ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
