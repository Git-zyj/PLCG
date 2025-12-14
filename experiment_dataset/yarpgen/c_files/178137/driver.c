#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2122213220U;
long long int var_8 = 6895101945440028487LL;
int var_15 = 1360712331;
int zero = 0;
signed char var_17 = (signed char)51;
unsigned char var_18 = (unsigned char)132;
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
