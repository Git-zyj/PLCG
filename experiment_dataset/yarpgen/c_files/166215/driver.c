#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1475238426852814163ULL;
unsigned short var_1 = (unsigned short)1825;
signed char var_2 = (signed char)21;
unsigned short var_3 = (unsigned short)43777;
unsigned short var_4 = (unsigned short)64625;
long long int var_5 = 5048542644050610257LL;
long long int var_6 = -5168060292464554339LL;
unsigned long long int var_9 = 1457385181687280386ULL;
int var_10 = 1433898353;
long long int var_12 = -5819504762309035818LL;
unsigned short var_14 = (unsigned short)36357;
long long int var_15 = -7818574864822082153LL;
unsigned short var_17 = (unsigned short)54713;
int zero = 0;
long long int var_18 = -8745274178732324367LL;
unsigned short var_19 = (unsigned short)3838;
short var_20 = (short)-27431;
unsigned short var_21 = (unsigned short)5259;
long long int var_22 = 8244380876380366154LL;
unsigned char var_23 = (unsigned char)40;
long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 3300114500532329458LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
