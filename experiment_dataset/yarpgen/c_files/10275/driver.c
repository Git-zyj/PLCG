#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44999;
unsigned short var_4 = (unsigned short)62941;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)46331;
unsigned short var_15 = (unsigned short)14717;
long long int var_16 = 1226996777942813631LL;
unsigned long long int var_17 = 3492338858002028690ULL;
unsigned short var_18 = (unsigned short)49270;
short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)19019;
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
