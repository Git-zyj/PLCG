#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)117;
unsigned long long int var_4 = 2055222918672869345ULL;
unsigned char var_5 = (unsigned char)200;
short var_7 = (short)-24832;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3015321506184073645ULL;
long long int var_19 = 6045392125338177705LL;
short var_20 = (short)-1507;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 3680538844389821622ULL;
}

void checksum() {
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
