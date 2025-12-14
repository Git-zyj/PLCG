#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
unsigned short var_3 = (unsigned short)59454;
short var_9 = (short)-19669;
signed char var_17 = (signed char)65;
int zero = 0;
unsigned char var_20 = (unsigned char)226;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3839738016U;
int var_23 = 1294225830;
unsigned long long int var_24 = 4895714004297355822ULL;
unsigned int arr_0 [10] ;
short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 231871043U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)3821;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
