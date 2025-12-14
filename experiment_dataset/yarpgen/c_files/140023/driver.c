#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1566264905U;
unsigned int var_2 = 3962720805U;
_Bool var_9 = (_Bool)1;
int var_11 = 525976077;
unsigned int var_12 = 3419572540U;
int var_14 = -2050046950;
short var_17 = (short)-8571;
int zero = 0;
int var_18 = 684904236;
short var_19 = (short)-1242;
unsigned long long int var_20 = 868076585725602141ULL;
long long int var_21 = 2159268712349457077LL;
unsigned char var_22 = (unsigned char)57;
unsigned int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2211557469U : 3349211132U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
