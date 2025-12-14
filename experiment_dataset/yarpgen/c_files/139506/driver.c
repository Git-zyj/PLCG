#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -892897534313308656LL;
signed char var_2 = (signed char)-25;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)-5;
signed char var_10 = (signed char)-24;
unsigned int var_11 = 332441703U;
int zero = 0;
long long int var_12 = -7935243388474704463LL;
unsigned char var_13 = (unsigned char)110;
unsigned short var_14 = (unsigned short)47603;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
