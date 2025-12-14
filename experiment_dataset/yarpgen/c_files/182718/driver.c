#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-6;
signed char var_7 = (signed char)76;
int var_8 = 1993156770;
unsigned int var_9 = 1394104256U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)62;
void init() {
}

void checksum() {
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
