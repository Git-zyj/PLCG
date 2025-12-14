#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned long long int var_2 = 2808602868918858306ULL;
unsigned short var_10 = (unsigned short)9189;
unsigned int var_11 = 2464386542U;
signed char var_13 = (signed char)79;
short var_15 = (short)26750;
unsigned int var_17 = 2786123579U;
int zero = 0;
unsigned long long int var_19 = 6217980927060254735ULL;
signed char var_20 = (signed char)-23;
unsigned long long int var_21 = 11537986002508034698ULL;
unsigned char arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)150;
}

void checksum() {
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
