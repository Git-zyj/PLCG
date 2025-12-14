#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8588972571873290748LL;
short var_6 = (short)32140;
long long int var_7 = -3707112466487777116LL;
unsigned char var_8 = (unsigned char)10;
unsigned short var_9 = (unsigned short)39172;
unsigned char var_12 = (unsigned char)191;
short var_17 = (short)-32151;
int zero = 0;
long long int var_19 = 1335998756817814149LL;
long long int var_20 = -900585663214952813LL;
unsigned long long int var_21 = 16431267830559650988ULL;
unsigned long long int var_22 = 17183038628969655746ULL;
long long int var_23 = -1949360447715059465LL;
signed char var_24 = (signed char)106;
unsigned long long int arr_1 [17] ;
long long int arr_2 [17] ;
long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 5737035302932049378ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -8550046410870187906LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 3636419264145355041LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
