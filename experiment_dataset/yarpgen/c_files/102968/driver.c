#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 369771763765604557ULL;
int var_4 = 708335427;
long long int var_5 = -5815397390240397088LL;
long long int var_6 = 4382137682035365882LL;
unsigned long long int var_7 = 8563853994480413220ULL;
unsigned long long int var_16 = 7559089899502339075ULL;
long long int var_17 = 6195308097650354074LL;
int zero = 0;
unsigned int var_19 = 3995718827U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)41289;
unsigned short var_22 = (unsigned short)7984;
unsigned long long int var_23 = 327603282836670582ULL;
unsigned short arr_4 [11] ;
unsigned char arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)52047;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)50;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
