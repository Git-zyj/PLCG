#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7092908893830647875LL;
int var_2 = 1005898827;
signed char var_3 = (signed char)-43;
short var_5 = (short)-23037;
unsigned char var_7 = (unsigned char)46;
unsigned int var_9 = 4128474253U;
long long int var_10 = 5680837757428367618LL;
int var_11 = -870730643;
int zero = 0;
long long int var_13 = -6202448827948047843LL;
signed char var_14 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
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
