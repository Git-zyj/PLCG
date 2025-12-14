#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3499598238802794356LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -4470580198172575567LL;
short var_5 = (short)-30495;
unsigned short var_6 = (unsigned short)53811;
unsigned short var_9 = (unsigned short)50978;
short var_12 = (short)-5805;
long long int var_14 = 2455398576733640393LL;
int zero = 0;
unsigned long long int var_15 = 14516530432996152352ULL;
signed char var_16 = (signed char)-27;
unsigned long long int var_17 = 8919769406965173998ULL;
signed char var_18 = (signed char)(-127 - 1);
short var_19 = (short)-21091;
unsigned short var_20 = (unsigned short)6007;
int arr_1 [11] ;
signed char arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1024549371;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-40;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
