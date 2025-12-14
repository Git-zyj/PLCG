#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = 323781440;
unsigned char var_8 = (unsigned char)109;
long long int var_9 = 5317159533397133882LL;
_Bool var_13 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)9;
unsigned char var_20 = (unsigned char)117;
signed char var_21 = (signed char)37;
_Bool var_22 = (_Bool)0;
long long int arr_6 [19] ;
signed char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 3383456832501527275LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)-118;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
