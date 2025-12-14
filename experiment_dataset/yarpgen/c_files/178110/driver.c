#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8458879994864637163LL;
unsigned int var_1 = 175134739U;
long long int var_2 = -2066279748163510794LL;
long long int var_3 = -5566655997488185269LL;
long long int var_4 = 8158418911787410368LL;
int var_5 = 1332810497;
signed char var_6 = (signed char)98;
unsigned long long int var_7 = 12114688942211611875ULL;
signed char var_8 = (signed char)-55;
int var_10 = -1111440557;
int var_11 = 1602734675;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)56;
int var_14 = 301535566;
int zero = 0;
signed char var_15 = (signed char)83;
signed char var_16 = (signed char)11;
int var_17 = 2046040559;
signed char var_18 = (signed char)-117;
int var_19 = 754580651;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-12067;
signed char var_22 = (signed char)-17;
int var_23 = 1268187688;
unsigned long long int var_24 = 16883880482080109923ULL;
_Bool var_25 = (_Bool)1;
long long int arr_0 [19] ;
signed char arr_1 [19] [19] ;
unsigned char arr_5 [19] ;
unsigned int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8528854139870483394LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 1525383647U;
}

void checksum() {
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
