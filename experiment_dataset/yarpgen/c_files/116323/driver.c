#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned int var_1 = 582924562U;
unsigned long long int var_4 = 4856091524475455577ULL;
int var_5 = 945971878;
long long int var_7 = 3889713376043744841LL;
unsigned int var_8 = 2070847752U;
unsigned long long int var_10 = 16439167997792820744ULL;
short var_11 = (short)23981;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)-3539;
long long int var_15 = -2640382107360186029LL;
unsigned int var_16 = 4037738542U;
unsigned char var_17 = (unsigned char)3;
_Bool var_18 = (_Bool)1;
unsigned int arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 4009410539U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
