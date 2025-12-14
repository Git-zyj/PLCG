#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1858247227;
long long int var_9 = -750243283194935278LL;
signed char var_10 = (signed char)-97;
short var_11 = (short)30642;
long long int var_12 = 5270578265228201717LL;
short var_17 = (short)380;
int zero = 0;
short var_18 = (short)-26042;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 221764173142956953ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
