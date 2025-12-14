#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33578;
signed char var_6 = (signed char)69;
short var_7 = (short)-7384;
short var_8 = (short)512;
unsigned char var_11 = (unsigned char)82;
short var_13 = (short)-25511;
signed char var_14 = (signed char)44;
unsigned int var_15 = 3706225035U;
unsigned int var_17 = 2845033591U;
long long int var_18 = -332462571612403444LL;
int zero = 0;
short var_19 = (short)-12720;
long long int var_20 = -187595027993123716LL;
unsigned short var_21 = (unsigned short)28860;
unsigned long long int var_22 = 5598010785336033946ULL;
signed char var_23 = (signed char)-79;
signed char arr_2 [24] ;
signed char arr_3 [24] [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6288488981435450272LL : -9133507733198905951LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
