#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)45;
unsigned char var_5 = (unsigned char)236;
unsigned char var_7 = (unsigned char)238;
_Bool var_9 = (_Bool)1;
unsigned int var_19 = 3282227767U;
int zero = 0;
long long int var_20 = 7047522246322061745LL;
signed char var_21 = (signed char)-110;
void init() {
}

void checksum() {
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
