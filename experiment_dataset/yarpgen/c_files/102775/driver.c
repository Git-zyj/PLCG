#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1972475825810259837LL;
long long int var_3 = 263269237917907433LL;
unsigned short var_5 = (unsigned short)52592;
unsigned short var_10 = (unsigned short)20859;
unsigned short var_11 = (unsigned short)33309;
long long int var_16 = 6657950728604529207LL;
int zero = 0;
unsigned short var_19 = (unsigned short)30596;
unsigned short var_20 = (unsigned short)5479;
unsigned short var_21 = (unsigned short)37486;
unsigned short var_22 = (unsigned short)53233;
long long int arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1296535045208298472LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)31757;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)52746;
}

void checksum() {
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
