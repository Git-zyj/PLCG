#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3254329237918486496LL;
short var_3 = (short)-17466;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1850462015U;
int var_7 = -53669861;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)44456;
int zero = 0;
short var_12 = (short)-1451;
unsigned short var_13 = (unsigned short)35193;
short var_14 = (short)4354;
unsigned int var_15 = 1561135637U;
unsigned int var_16 = 843523970U;
unsigned int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2090957334U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
