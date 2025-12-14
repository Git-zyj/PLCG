#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10670454317676153587ULL;
unsigned char var_6 = (unsigned char)66;
unsigned int var_7 = 3009613851U;
unsigned long long int var_9 = 3059056633159967537ULL;
unsigned char var_10 = (unsigned char)247;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16019923076606477647ULL;
unsigned long long int var_18 = 6850494927165457987ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
