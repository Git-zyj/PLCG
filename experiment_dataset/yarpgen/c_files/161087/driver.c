#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3421463893U;
int var_6 = 595642751;
unsigned short var_8 = (unsigned short)46322;
int var_9 = -1538089722;
unsigned int var_11 = 2299237954U;
int zero = 0;
int var_14 = 876177485;
unsigned short var_15 = (unsigned short)23615;
int var_16 = 998768567;
unsigned char var_17 = (unsigned char)116;
long long int var_18 = 2915910280589394991LL;
short var_19 = (short)-30501;
unsigned short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)49014;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
