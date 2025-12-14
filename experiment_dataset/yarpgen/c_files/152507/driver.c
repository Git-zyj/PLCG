#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1864016202;
int var_4 = -1944204480;
unsigned long long int var_6 = 7172971742298675562ULL;
unsigned char var_9 = (unsigned char)242;
unsigned char var_11 = (unsigned char)182;
unsigned char var_14 = (unsigned char)141;
unsigned short var_15 = (unsigned short)38836;
int zero = 0;
unsigned int var_18 = 2997333934U;
long long int var_19 = 5957887392292220317LL;
unsigned long long int var_20 = 8401002642949307493ULL;
long long int var_21 = -2460630421965654743LL;
unsigned char var_22 = (unsigned char)188;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)112;
int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned char arr_2 [22] ;
signed char arr_3 [22] ;
long long int arr_4 [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1465366877;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 6494236487657863697ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-31 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3091774796670204027LL : -4061206474085848510LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -712608254 : -174236305;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
