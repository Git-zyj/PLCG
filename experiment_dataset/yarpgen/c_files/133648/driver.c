#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 228019070U;
unsigned int var_1 = 2757498025U;
int var_2 = 48779574;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2572104634U;
unsigned int var_11 = 1165618864U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
