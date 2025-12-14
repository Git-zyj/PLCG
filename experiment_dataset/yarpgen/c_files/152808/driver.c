#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
unsigned int var_2 = 3190519718U;
unsigned char var_3 = (unsigned char)179;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3770927066U;
short var_8 = (short)6585;
unsigned long long int var_11 = 5183028117366960167ULL;
signed char var_12 = (signed char)-70;
signed char var_13 = (signed char)-118;
long long int var_14 = -6098438248195719517LL;
short var_15 = (short)7318;
unsigned long long int var_16 = 8773358049166547475ULL;
int zero = 0;
unsigned long long int var_17 = 1527088792954207086ULL;
unsigned long long int var_18 = 18332695037077839535ULL;
unsigned long long int var_19 = 9354773891138117324ULL;
long long int var_20 = 8221011949365209006LL;
unsigned char var_21 = (unsigned char)83;
short var_22 = (short)7681;
unsigned char var_23 = (unsigned char)79;
long long int var_24 = 3778911084229381238LL;
unsigned int var_25 = 3381721930U;
signed char var_26 = (signed char)-22;
unsigned long long int arr_1 [25] ;
signed char arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
int arr_5 [25] ;
int arr_6 [25] [25] ;
int arr_7 [25] [25] ;
signed char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3744211078791465258ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3818229522U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -263902898;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -26323229 : -1004337144;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 1847242818;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)105;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
