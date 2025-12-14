#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)60;
unsigned int var_3 = 3231442852U;
long long int var_4 = -1171507741232060687LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 9105408872638554591ULL;
unsigned long long int var_7 = 2224259669364636960ULL;
unsigned long long int var_10 = 12575453932250533556ULL;
int zero = 0;
unsigned long long int var_12 = 416187448244155170ULL;
long long int var_13 = 3998113155629726648LL;
short var_14 = (short)-32583;
short var_15 = (short)23267;
long long int var_16 = 3808968751515266310LL;
unsigned char var_17 = (unsigned char)238;
unsigned int var_18 = 7861722U;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 5919969827403552161ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 5863725489111385352ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
