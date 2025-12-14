#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
_Bool var_1 = (_Bool)0;
long long int var_2 = 742719093096346026LL;
long long int var_3 = 3734743788065927091LL;
unsigned char var_6 = (unsigned char)11;
long long int var_7 = -7294049886645721456LL;
long long int var_9 = 684592884634252925LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5160695032288992910LL;
int zero = 0;
long long int var_16 = 1058465837563052001LL;
short var_17 = (short)23702;
short var_18 = (short)-34;
int var_19 = -1949551421;
unsigned int var_20 = 632063603U;
unsigned int var_21 = 2957374522U;
_Bool arr_1 [20] ;
signed char arr_3 [20] ;
int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2027205178;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
