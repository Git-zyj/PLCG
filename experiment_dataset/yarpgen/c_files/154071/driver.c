#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
_Bool var_2 = (_Bool)0;
int var_3 = -223688042;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)63881;
unsigned long long int var_9 = 9748909465790437616ULL;
long long int var_10 = -3031311439509704232LL;
int zero = 0;
signed char var_14 = (signed char)9;
int var_15 = -1056279090;
_Bool var_16 = (_Bool)1;
short var_17 = (short)19134;
signed char arr_0 [10] ;
signed char arr_2 [10] ;
long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3773195447869872070LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
