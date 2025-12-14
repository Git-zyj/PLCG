#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 4259104174U;
short var_4 = (short)25866;
long long int var_7 = -2187938940563004819LL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2609752884U;
unsigned long long int var_12 = 10475178979170472521ULL;
short var_13 = (short)-13130;
int zero = 0;
signed char var_19 = (signed char)111;
signed char var_20 = (signed char)99;
void init() {
}

void checksum() {
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
