#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4334293717833436063LL;
long long int var_3 = -8088622702826458331LL;
signed char var_9 = (signed char)-42;
int zero = 0;
unsigned int var_12 = 2674771252U;
short var_13 = (short)4931;
unsigned long long int var_14 = 7798934666584231616ULL;
unsigned char var_15 = (unsigned char)17;
_Bool arr_0 [16] ;
unsigned int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 3434279784U;
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
