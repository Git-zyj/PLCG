#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned long long int var_1 = 16334189437142035836ULL;
short var_2 = (short)23648;
_Bool var_4 = (_Bool)1;
int var_7 = 1330011725;
int var_8 = 919352784;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 5233414184410803763ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -9167911251988248067LL;
int var_20 = 1100012394;
_Bool var_21 = (_Bool)1;
int var_22 = -1181563769;
unsigned long long int var_23 = 6685911755171061491ULL;
long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 4679307716895535316LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 14827542607038611717ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8856272686661511309ULL : 12934249092643790696ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 145650028884694954ULL : 16739630859429349181ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
