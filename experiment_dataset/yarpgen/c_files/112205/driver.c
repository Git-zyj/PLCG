#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-276;
unsigned short var_4 = (unsigned short)12983;
short var_6 = (short)7217;
short var_8 = (short)-17852;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 18238528935909723209ULL;
unsigned short var_14 = (unsigned short)32960;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)40714;
unsigned short var_22 = (unsigned short)25217;
void init() {
}

void checksum() {
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
