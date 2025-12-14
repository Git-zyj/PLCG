#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6631025973390426635LL;
signed char var_2 = (signed char)106;
signed char var_3 = (signed char)-39;
long long int var_4 = -4868084042610002168LL;
unsigned long long int var_5 = 10009073341675429767ULL;
signed char var_6 = (signed char)-51;
int var_9 = -2102091299;
unsigned long long int var_11 = 5716585002346495117ULL;
signed char var_12 = (signed char)82;
unsigned long long int var_13 = 10568075222153295426ULL;
int zero = 0;
signed char var_14 = (signed char)117;
unsigned int var_15 = 53260997U;
signed char var_16 = (signed char)-121;
unsigned long long int var_17 = 837402452365636348ULL;
unsigned short var_18 = (unsigned short)2392;
unsigned long long int var_19 = 139114269385407071ULL;
long long int arr_4 [10] ;
unsigned long long int arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -5271785674574657095LL : -956330696480516672LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2837630787562637930ULL;
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
