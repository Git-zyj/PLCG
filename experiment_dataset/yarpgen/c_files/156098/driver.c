#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6851;
_Bool var_2 = (_Bool)0;
unsigned int var_6 = 3618741353U;
_Bool var_9 = (_Bool)0;
unsigned int var_18 = 72226149U;
unsigned int var_19 = 3703262855U;
int zero = 0;
signed char var_20 = (signed char)44;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3331325572U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
