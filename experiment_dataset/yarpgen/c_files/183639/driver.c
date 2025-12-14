#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_5 = (short)-7062;
unsigned long long int var_7 = 18443904485651688294ULL;
unsigned long long int var_9 = 4545491413491878008ULL;
int var_16 = 57573957;
int zero = 0;
long long int var_17 = 6851364247809613417LL;
short var_18 = (short)31615;
_Bool var_19 = (_Bool)0;
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
