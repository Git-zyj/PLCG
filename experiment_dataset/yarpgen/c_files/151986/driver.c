#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3714893165036111145LL;
int var_4 = 13071667;
signed char var_12 = (signed char)-23;
_Bool var_13 = (_Bool)0;
short var_15 = (short)-4855;
unsigned int var_16 = 762789891U;
int zero = 0;
short var_18 = (short)30350;
unsigned char var_19 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
