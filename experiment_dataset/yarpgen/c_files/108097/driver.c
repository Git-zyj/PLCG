#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1450164202;
short var_4 = (short)-11665;
unsigned int var_5 = 1165075413U;
unsigned long long int var_7 = 12924766158080463719ULL;
signed char var_9 = (signed char)-43;
unsigned int var_10 = 3035329561U;
unsigned short var_11 = (unsigned short)21899;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15231033638670627908ULL;
unsigned int var_14 = 1610371440U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
