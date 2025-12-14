#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)5;
unsigned long long int var_3 = 5338732737819317395ULL;
short var_6 = (short)-10162;
signed char var_13 = (signed char)-49;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-21620;
long long int var_16 = 897159480785830179LL;
short var_17 = (short)25729;
_Bool var_18 = (_Bool)1;
short var_19 = (short)25459;
long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
_Bool arr_2 [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4331318246456236064LL : 1818114707959002396LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 4239948098U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5848598431777033892ULL : 3786883819362912352ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
