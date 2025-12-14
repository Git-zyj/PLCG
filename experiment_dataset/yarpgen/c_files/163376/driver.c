#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27344;
int var_1 = -578563848;
_Bool var_2 = (_Bool)0;
long long int var_3 = 5944497720762538448LL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)6;
unsigned long long int var_9 = 16510363873283626690ULL;
short var_10 = (short)25106;
unsigned char var_12 = (unsigned char)118;
unsigned long long int var_14 = 11088910163789903492ULL;
int zero = 0;
signed char var_15 = (signed char)72;
int var_16 = -1104030240;
unsigned int var_17 = 1409879240U;
short var_18 = (short)30241;
unsigned int var_19 = 125975202U;
unsigned char var_20 = (unsigned char)175;
unsigned long long int var_21 = 5999004750972641620ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
