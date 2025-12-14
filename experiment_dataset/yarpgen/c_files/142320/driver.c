#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12556;
short var_1 = (short)30237;
signed char var_2 = (signed char)7;
signed char var_3 = (signed char)37;
unsigned long long int var_4 = 7499113043862630495ULL;
unsigned char var_5 = (unsigned char)67;
short var_8 = (short)-2289;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)20;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)26632;
unsigned char var_16 = (unsigned char)7;
unsigned char var_17 = (unsigned char)178;
int var_18 = -1000384140;
unsigned char var_19 = (unsigned char)146;
long long int var_20 = 3168040239674362118LL;
int var_21 = 1779065703;
long long int var_22 = 3232273255308930840LL;
int var_23 = -1156822288;
unsigned long long int var_24 = 15462729387030562793ULL;
unsigned long long int arr_5 [15] ;
signed char arr_12 [15] ;
long long int arr_19 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 14554201514364877320ULL : 3349494222416794691ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 5203262665391564782LL;
}

void checksum() {
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
