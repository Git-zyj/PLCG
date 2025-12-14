#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned char var_1 = (unsigned char)142;
int var_2 = -1126339890;
_Bool var_3 = (_Bool)0;
short var_4 = (short)10177;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-5;
signed char var_7 = (signed char)51;
unsigned long long int var_8 = 5205598137989488280ULL;
long long int var_9 = 4257003473603251064LL;
int var_10 = 1506248790;
unsigned char var_11 = (unsigned char)133;
unsigned int var_12 = 1037011781U;
int zero = 0;
unsigned long long int var_13 = 8873216211734504747ULL;
unsigned short var_14 = (unsigned short)43299;
signed char var_15 = (signed char)-105;
unsigned short var_16 = (unsigned short)34817;
int var_17 = 1831390781;
unsigned long long int var_18 = 10260258524829412241ULL;
signed char arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-45 : (signed char)58;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
