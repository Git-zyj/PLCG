#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5454903113902548350ULL;
unsigned long long int var_1 = 7745761205716796551ULL;
unsigned long long int var_2 = 1849845474401367187ULL;
unsigned short var_3 = (unsigned short)33059;
unsigned long long int var_4 = 2982449010142643102ULL;
unsigned int var_5 = 2598655411U;
signed char var_6 = (signed char)-101;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)34351;
unsigned long long int var_10 = 4817487485695277264ULL;
int zero = 0;
unsigned long long int var_11 = 18406075792939301825ULL;
unsigned int var_12 = 82948689U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-2;
int var_15 = -2079156784;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
