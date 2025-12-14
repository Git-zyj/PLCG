#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27932;
unsigned int var_5 = 371828427U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 448558701U;
signed char var_8 = (signed char)-10;
int var_11 = -869910007;
int zero = 0;
unsigned long long int var_15 = 1704490312403919917ULL;
short var_16 = (short)31645;
void init() {
}

void checksum() {
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
