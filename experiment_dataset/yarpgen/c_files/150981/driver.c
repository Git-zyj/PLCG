#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3867751997U;
unsigned long long int var_7 = 4095874020507941819ULL;
unsigned char var_12 = (unsigned char)244;
unsigned short var_16 = (unsigned short)39857;
int zero = 0;
unsigned short var_17 = (unsigned short)62779;
int var_18 = 1306736874;
short var_19 = (short)9778;
_Bool var_20 = (_Bool)1;
short var_21 = (short)15215;
unsigned short var_22 = (unsigned short)25272;
int arr_0 [15] ;
long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 506885955;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -3020742496531362609LL;
}

void checksum() {
    hash(&seed, var_17);
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
