#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10907119148215458007ULL;
unsigned long long int var_4 = 14530304408736752544ULL;
unsigned long long int var_11 = 4127361651892737330ULL;
int zero = 0;
unsigned long long int var_12 = 4659374157573775624ULL;
unsigned long long int var_13 = 3647748728086746912ULL;
int var_14 = -377525168;
long long int var_15 = -4110958661248473678LL;
unsigned long long int var_16 = 12317009388585426349ULL;
_Bool arr_0 [22] ;
unsigned long long int arr_5 [22] ;
unsigned long long int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 16264716370784483068ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1166470939127386595ULL : 12536351341654764996ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
