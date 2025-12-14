#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1683818774U;
unsigned short var_2 = (unsigned short)21732;
unsigned short var_3 = (unsigned short)30612;
int var_7 = -487978406;
long long int var_10 = 7668192987699271899LL;
signed char var_12 = (signed char)99;
unsigned long long int var_13 = 11788883792030343566ULL;
int var_14 = -2020247445;
signed char var_16 = (signed char)-104;
int zero = 0;
int var_18 = -778931072;
unsigned char var_19 = (unsigned char)138;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3249012310U;
unsigned int var_22 = 196763660U;
unsigned int var_23 = 2396059931U;
int var_24 = 2130504195;
unsigned char var_25 = (unsigned char)117;
unsigned long long int var_26 = 7810809444215968399ULL;
unsigned long long int var_27 = 11666682411910314613ULL;
short var_28 = (short)-2754;
int var_29 = 310668628;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)57;
unsigned char arr_1 [16] [16] ;
int arr_3 [16] ;
_Bool arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 35087941;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
