#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2262424101U;
short var_3 = (short)-21125;
unsigned int var_4 = 166778995U;
unsigned short var_5 = (unsigned short)16214;
long long int var_6 = 9179602060113404366LL;
unsigned int var_9 = 685848716U;
int var_11 = -268344061;
unsigned int var_12 = 4277441118U;
unsigned char var_14 = (unsigned char)226;
int zero = 0;
long long int var_15 = 2713103665888954396LL;
long long int var_16 = 2556499526994317391LL;
unsigned long long int var_17 = 5833749608744620392ULL;
unsigned int var_18 = 2280419876U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)27525;
unsigned int arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2404230493U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
