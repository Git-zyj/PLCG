#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
long long int var_3 = 4781415118120880016LL;
unsigned short var_4 = (unsigned short)1107;
short var_5 = (short)-7033;
short var_8 = (short)-5372;
int var_9 = -473775030;
unsigned long long int var_12 = 13486943341310874099ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
short var_20 = (short)1648;
short var_21 = (short)18559;
short var_22 = (short)-31119;
void init() {
}

void checksum() {
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
