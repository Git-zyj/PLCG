#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5693972272293062500LL;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)94;
unsigned short var_10 = (unsigned short)50826;
int zero = 0;
int var_12 = 333078483;
unsigned long long int var_13 = 15985384469098215727ULL;
unsigned short var_14 = (unsigned short)25282;
int var_15 = -205373944;
unsigned int var_16 = 2889581268U;
long long int var_17 = 8920483625893711680LL;
unsigned long long int var_18 = 17999014039864558935ULL;
unsigned int arr_0 [17] [17] ;
unsigned short arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2410842503U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)54257;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
