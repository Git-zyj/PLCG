#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12116500499034104777ULL;
unsigned long long int var_1 = 6110776311932181805ULL;
unsigned char var_3 = (unsigned char)138;
signed char var_5 = (signed char)-104;
unsigned int var_6 = 3517432453U;
unsigned long long int var_8 = 809689710492420327ULL;
long long int var_10 = -6013220129707976876LL;
int zero = 0;
unsigned short var_11 = (unsigned short)61335;
unsigned long long int var_12 = 1405759205521134094ULL;
unsigned int var_13 = 641439545U;
signed char var_14 = (signed char)7;
int var_15 = 1508844065;
long long int var_16 = 4698043956484025512LL;
signed char var_17 = (signed char)127;
unsigned int var_18 = 1325231730U;
unsigned int var_19 = 3333320662U;
unsigned int var_20 = 1937590062U;
signed char arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (signed char)-15;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
