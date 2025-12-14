#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5680106557253927428LL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)94;
long long int var_6 = 941195773988870670LL;
long long int var_7 = -3502524586784229234LL;
unsigned char var_9 = (unsigned char)43;
long long int var_10 = 1328756865350256769LL;
long long int var_12 = -2612670011495781837LL;
long long int var_13 = 8703091578441222827LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)227;
long long int var_18 = 4293315888573150308LL;
long long int var_19 = 5038138654243618670LL;
long long int var_20 = -7345510372256580966LL;
long long int arr_1 [20] [20] ;
long long int arr_2 [20] [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 3814274005572020185LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -7554691386540037856LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5870347573614516110LL : -737717658504165290LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
