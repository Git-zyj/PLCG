#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13719061049456306757ULL;
unsigned long long int var_1 = 9316442931270448811ULL;
unsigned short var_3 = (unsigned short)28314;
_Bool var_4 = (_Bool)1;
long long int var_7 = -5956365826085169141LL;
unsigned int var_9 = 4286439620U;
int var_10 = -1615152712;
unsigned long long int var_11 = 15088564010347500929ULL;
unsigned short var_12 = (unsigned short)64483;
unsigned char var_13 = (unsigned char)167;
short var_14 = (short)26082;
int var_15 = 1668620239;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)9631;
unsigned char var_18 = (unsigned char)73;
int var_19 = -500115808;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
