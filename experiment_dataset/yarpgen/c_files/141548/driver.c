#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4122;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 7138779674993315103ULL;
short var_8 = (short)-20877;
unsigned long long int var_9 = 14673898587005239695ULL;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -6803062929789459582LL;
unsigned int var_16 = 2593083967U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1792319642U;
unsigned long long int var_19 = 15402317056224293497ULL;
unsigned char var_20 = (unsigned char)116;
unsigned short var_21 = (unsigned short)11618;
int arr_0 [17] ;
long long int arr_1 [17] ;
unsigned int arr_3 [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2145202530 : -2004686431;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -8709793698559784762LL : -6084937973862612433LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 853745330U : 3561458439U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 13558974609778025415ULL : 1493547004058328590ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
