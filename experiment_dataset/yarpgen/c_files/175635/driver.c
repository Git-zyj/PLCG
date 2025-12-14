#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6223435895946203151ULL;
long long int var_2 = -4937411342022277468LL;
short var_5 = (short)-13694;
unsigned int var_8 = 1693950177U;
long long int var_9 = -5486293629714857513LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 2624184789271230289LL;
int zero = 0;
unsigned int var_12 = 1029295104U;
unsigned long long int var_13 = 8596655004443713387ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)125;
short arr_1 [13] [13] ;
long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-31160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -6841999663974874870LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
