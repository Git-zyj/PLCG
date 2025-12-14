#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3769442861U;
unsigned int var_1 = 2170676192U;
short var_3 = (short)-18977;
unsigned short var_5 = (unsigned short)13154;
signed char var_6 = (signed char)88;
signed char var_9 = (signed char)72;
int zero = 0;
signed char var_12 = (signed char)-51;
int var_13 = 292964770;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
