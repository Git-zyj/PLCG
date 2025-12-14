#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 178302687;
signed char var_1 = (signed char)33;
unsigned char var_3 = (unsigned char)139;
long long int var_7 = -7837096043121590585LL;
_Bool var_8 = (_Bool)0;
int var_9 = 1408377367;
int zero = 0;
int var_10 = -893432591;
short var_11 = (short)-842;
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
