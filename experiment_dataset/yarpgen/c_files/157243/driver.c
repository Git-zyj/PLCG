#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
signed char var_2 = (signed char)82;
long long int var_4 = -9042815263749922181LL;
unsigned short var_7 = (unsigned short)60896;
signed char var_9 = (signed char)-73;
unsigned short var_11 = (unsigned short)7309;
long long int var_12 = 4945785557330494925LL;
int zero = 0;
long long int var_13 = -4971505475667275863LL;
unsigned short var_14 = (unsigned short)52819;
long long int var_15 = -7869521173367511737LL;
short var_16 = (short)1027;
unsigned int arr_0 [17] ;
_Bool arr_3 [17] [17] ;
long long int arr_5 [17] [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 707589778U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -639499084585722970LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 501658940U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
