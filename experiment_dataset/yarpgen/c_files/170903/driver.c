#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 839246098;
unsigned int var_7 = 3400420793U;
_Bool var_8 = (_Bool)1;
int var_9 = -990274098;
int zero = 0;
unsigned int var_10 = 2454382801U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1454434707U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
