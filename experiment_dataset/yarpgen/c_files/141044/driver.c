#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 437363981U;
unsigned long long int var_2 = 1545222945670969922ULL;
unsigned long long int var_3 = 5343460704088857939ULL;
unsigned int var_4 = 2373557571U;
unsigned int var_7 = 994975350U;
unsigned long long int var_8 = 2256480520722542508ULL;
int var_10 = -1323246293;
unsigned int var_13 = 79952740U;
int zero = 0;
short var_18 = (short)-26697;
unsigned long long int var_19 = 7223126610897237433ULL;
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
