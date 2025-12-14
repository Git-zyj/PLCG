#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3534238413U;
unsigned short var_9 = (unsigned short)23323;
unsigned int var_12 = 1520478024U;
unsigned int var_14 = 716338199U;
unsigned long long int var_15 = 15901198854247573524ULL;
unsigned long long int var_16 = 12788658127265186296ULL;
unsigned long long int var_17 = 3027563127813413401ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)230;
unsigned char var_19 = (unsigned char)13;
unsigned int var_20 = 3396040626U;
unsigned short var_21 = (unsigned short)31088;
int var_22 = 116834174;
unsigned int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3664777110U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
