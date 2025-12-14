#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-23;
unsigned int var_4 = 1442815595U;
unsigned long long int var_6 = 6891037506977382592ULL;
long long int var_9 = -5241142821247917817LL;
unsigned int var_11 = 2874901191U;
short var_13 = (short)-30574;
int var_17 = 1148404050;
int zero = 0;
int var_18 = -620548787;
unsigned int var_19 = 1374956215U;
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
