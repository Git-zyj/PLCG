#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-105;
unsigned int var_6 = 2795277209U;
long long int var_10 = -6530767325701905732LL;
signed char var_13 = (signed char)88;
unsigned char var_15 = (unsigned char)200;
int zero = 0;
long long int var_18 = -3393923541797933219LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)(-127 - 1);
unsigned int var_21 = 1245691919U;
_Bool var_22 = (_Bool)1;
signed char arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-30;
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
