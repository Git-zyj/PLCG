#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1774097924;
_Bool var_9 = (_Bool)1;
long long int var_14 = 1817354283412374735LL;
signed char var_15 = (signed char)-67;
int zero = 0;
signed char var_19 = (signed char)-55;
unsigned int var_20 = 241518509U;
signed char var_21 = (signed char)44;
int var_22 = -1645839588;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
