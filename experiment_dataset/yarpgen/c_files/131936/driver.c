#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
signed char var_5 = (signed char)-47;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)21209;
_Bool var_10 = (_Bool)0;
int var_13 = -105157241;
int zero = 0;
signed char var_17 = (signed char)-66;
unsigned int var_18 = 781144917U;
long long int var_19 = 3840729543955211461LL;
void init() {
}

void checksum() {
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
