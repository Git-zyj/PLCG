#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29606;
unsigned long long int var_2 = 8596062532936221347ULL;
unsigned long long int var_3 = 15671252282413616458ULL;
short var_9 = (short)5633;
short var_10 = (short)-30540;
short var_12 = (short)10624;
unsigned char var_13 = (unsigned char)180;
int zero = 0;
unsigned int var_18 = 4154586321U;
short var_19 = (short)12285;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)124;
void init() {
}

void checksum() {
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
