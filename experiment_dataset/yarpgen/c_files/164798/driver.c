#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3351031935496937053LL;
int var_6 = -1648474575;
unsigned long long int var_7 = 316182857012422578ULL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-29340;
short var_10 = (short)20989;
int var_11 = -1950956750;
unsigned int var_12 = 1667405528U;
short var_13 = (short)3506;
long long int var_14 = -1459346575373886838LL;
unsigned int var_15 = 582774916U;
int zero = 0;
int var_16 = 1653752252;
long long int var_17 = 1675818942505411399LL;
unsigned short var_18 = (unsigned short)21288;
unsigned int var_19 = 2551197083U;
short var_20 = (short)24334;
signed char var_21 = (signed char)74;
int var_22 = -526495467;
long long int arr_2 [16] ;
unsigned int arr_3 [16] ;
unsigned char arr_9 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -7268063843435873380LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1659265258U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)225;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
