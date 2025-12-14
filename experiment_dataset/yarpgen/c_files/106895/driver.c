#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_9 = 1435802189;
signed char var_11 = (signed char)-35;
int zero = 0;
signed char var_15 = (signed char)-16;
long long int var_16 = 5701938542737370836LL;
signed char var_17 = (signed char)66;
signed char var_18 = (signed char)31;
unsigned char var_19 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
