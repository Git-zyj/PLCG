#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59224;
unsigned long long int var_1 = 7255603876422708673ULL;
unsigned short var_2 = (unsigned short)46476;
_Bool var_3 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)35881;
short var_18 = (short)10400;
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
