#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2356993107U;
int var_3 = 277189751;
int var_6 = 614448988;
long long int var_7 = 4071710867813967932LL;
unsigned int var_9 = 2244218422U;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
