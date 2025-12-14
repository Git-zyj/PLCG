#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
unsigned long long int var_1 = 7136816439924402168ULL;
unsigned short var_3 = (unsigned short)1389;
unsigned long long int var_4 = 9783899213122679153ULL;
signed char var_6 = (signed char)-117;
int var_7 = 468369759;
short var_8 = (short)15141;
_Bool var_9 = (_Bool)1;
short var_11 = (short)3034;
int zero = 0;
signed char var_12 = (signed char)-102;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)26840;
unsigned char var_15 = (unsigned char)236;
long long int var_16 = 3493552362089533454LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
