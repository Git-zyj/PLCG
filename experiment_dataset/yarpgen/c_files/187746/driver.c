#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2463311722U;
unsigned long long int var_6 = 9905509961874171041ULL;
unsigned int var_7 = 4288542025U;
long long int var_12 = 4426743064615873434LL;
long long int var_13 = 2513462497164186280LL;
unsigned char var_14 = (unsigned char)127;
long long int var_15 = 606262913737758622LL;
unsigned char var_16 = (unsigned char)172;
unsigned char var_17 = (unsigned char)233;
int zero = 0;
long long int var_18 = 6510512434798822791LL;
long long int var_19 = -3647554367672558102LL;
int var_20 = -885254513;
unsigned short var_21 = (unsigned short)15402;
unsigned long long int var_22 = 16554163463565372717ULL;
unsigned long long int var_23 = 1161642428767787470ULL;
int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1678477824 : -1168631969;
}

void checksum() {
    hash(&seed, var_18);
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
