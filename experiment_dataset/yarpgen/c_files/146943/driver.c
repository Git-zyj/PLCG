#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11608036845386755578ULL;
signed char var_5 = (signed char)82;
unsigned long long int var_8 = 3546983849784800714ULL;
unsigned short var_10 = (unsigned short)52419;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 18081261177968817762ULL;
signed char var_15 = (signed char)124;
unsigned long long int arr_0 [25] ;
signed char arr_2 [25] ;
unsigned short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16748149061668874338ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)15212;
}

void checksum() {
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
