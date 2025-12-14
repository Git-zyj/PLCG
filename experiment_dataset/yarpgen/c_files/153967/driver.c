#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1538912259;
unsigned short var_4 = (unsigned short)16355;
unsigned char var_6 = (unsigned char)38;
unsigned char var_15 = (unsigned char)119;
unsigned short var_16 = (unsigned short)39315;
short var_18 = (short)-9559;
int zero = 0;
long long int var_19 = 3146049332248901490LL;
unsigned int var_20 = 670592580U;
short var_21 = (short)-24289;
unsigned int var_22 = 2029120622U;
unsigned short var_23 = (unsigned short)19331;
long long int var_24 = 588970632280403794LL;
short arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)26831;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
