#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8907042005626722955LL;
unsigned int var_8 = 3588562102U;
long long int var_9 = 9091098529517119806LL;
long long int var_10 = 3176252290615089168LL;
long long int var_11 = -5723048743874031349LL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 2532684388U;
int zero = 0;
signed char var_18 = (signed char)-3;
signed char var_19 = (signed char)-74;
unsigned int var_20 = 281608238U;
long long int var_21 = 8588764349405519204LL;
unsigned char var_22 = (unsigned char)40;
_Bool var_23 = (_Bool)1;
unsigned char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)87;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
