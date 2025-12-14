#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
signed char var_1 = (signed char)-53;
short var_2 = (short)-6503;
unsigned long long int var_4 = 12120840026597573353ULL;
unsigned long long int var_5 = 12252715316466665848ULL;
long long int var_6 = 1172355266386507384LL;
int var_7 = -393459479;
long long int var_8 = 1004506204894723755LL;
long long int var_9 = 7325862501240593328LL;
int zero = 0;
signed char var_11 = (signed char)8;
signed char var_12 = (signed char)-61;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)61;
short var_15 = (short)15246;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned short arr_12 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)55997 : (unsigned short)25875;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
