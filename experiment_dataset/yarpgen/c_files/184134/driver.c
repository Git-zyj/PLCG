#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)933;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)53951;
short var_11 = (short)2775;
short var_16 = (short)13588;
int zero = 0;
unsigned long long int var_20 = 8606979846955597498ULL;
unsigned short var_21 = (unsigned short)65525;
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
