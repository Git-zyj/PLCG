#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2565819506U;
unsigned long long int var_8 = 15555734147490596468ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2560382574U;
unsigned char var_12 = (unsigned char)134;
unsigned int var_17 = 1330364334U;
int zero = 0;
int var_19 = 1814225344;
unsigned char var_20 = (unsigned char)149;
unsigned long long int var_21 = 2027560739133320227ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
