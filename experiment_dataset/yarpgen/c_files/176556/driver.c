#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1082544755187592706LL;
unsigned short var_2 = (unsigned short)38762;
long long int var_8 = 2076045960412591103LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15522587621500507226ULL;
unsigned short var_13 = (unsigned short)27586;
short arr_0 [15] ;
unsigned char arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)31721;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)51;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
