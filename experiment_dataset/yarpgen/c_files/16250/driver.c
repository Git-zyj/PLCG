#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
long long int var_3 = -1866419676735196954LL;
signed char var_5 = (signed char)109;
unsigned short var_6 = (unsigned short)10895;
signed char var_8 = (signed char)111;
unsigned short var_9 = (unsigned short)15760;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4203672781U;
signed char var_14 = (signed char)111;
long long int var_15 = 990036694707317234LL;
unsigned int var_16 = 1961936401U;
int zero = 0;
long long int var_18 = -1031581699378328391LL;
int var_19 = -1607162341;
signed char var_20 = (signed char)-82;
unsigned short var_21 = (unsigned short)41654;
unsigned short var_22 = (unsigned short)10356;
unsigned short var_23 = (unsigned short)9871;
unsigned int var_24 = 1576365271U;
int var_25 = -1228892113;
unsigned char var_26 = (unsigned char)136;
unsigned int var_27 = 737903639U;
long long int var_28 = 3431733534402994842LL;
long long int var_29 = -1339306464962082582LL;
int var_30 = 782784018;
unsigned int var_31 = 1499728059U;
signed char arr_0 [17] ;
signed char arr_1 [17] ;
long long int arr_2 [17] ;
unsigned int arr_4 [17] ;
unsigned char arr_5 [17] ;
int arr_8 [17] ;
_Bool arr_9 [17] ;
long long int arr_11 [14] [14] ;
unsigned short arr_6 [17] ;
unsigned int arr_7 [17] ;
signed char arr_15 [14] ;
unsigned int arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -5217688925344500425LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3361550706U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -1280677924;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = -8596697143294250594LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36554 : (unsigned short)37044;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2260663903U : 3994170322U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1335714227U : 981594160U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
