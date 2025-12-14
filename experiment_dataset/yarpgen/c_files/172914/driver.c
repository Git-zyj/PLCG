#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)43;
signed char var_3 = (signed char)-127;
_Bool var_4 = (_Bool)0;
signed char var_11 = (signed char)-112;
unsigned char var_12 = (unsigned char)9;
long long int var_13 = -3813310990308996731LL;
short var_15 = (short)11608;
int zero = 0;
short var_16 = (short)-11286;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 693667976431538075ULL;
unsigned char var_19 = (unsigned char)176;
unsigned short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)61711;
}

void checksum() {
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
