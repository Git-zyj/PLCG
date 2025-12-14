#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29524;
short var_6 = (short)-6964;
int var_7 = 721107593;
signed char var_8 = (signed char)84;
short var_12 = (short)-8957;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_19 = -7011341424250480193LL;
signed char var_20 = (signed char)-65;
void init() {
}

void checksum() {
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
