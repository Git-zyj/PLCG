#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58313;
int var_1 = 2146621763;
unsigned short var_2 = (unsigned short)50990;
long long int var_3 = 2380932816268471174LL;
unsigned int var_4 = 957532248U;
int var_6 = 1374211053;
unsigned char var_8 = (unsigned char)128;
unsigned short var_10 = (unsigned short)42499;
unsigned long long int var_11 = 13582109792750746900ULL;
_Bool var_12 = (_Bool)0;
long long int var_14 = 3076553624762765519LL;
unsigned short var_15 = (unsigned short)30362;
unsigned long long int var_16 = 10956082263507312966ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)39804;
unsigned short var_19 = (unsigned short)49135;
int var_20 = 1745020273;
int var_21 = -1376437924;
_Bool var_22 = (_Bool)1;
int arr_1 [24] ;
_Bool arr_5 [10] ;
int arr_8 [10] [10] ;
unsigned short arr_9 [10] ;
unsigned short arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 991616330;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 945981372;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned short)27449;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)56346;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
