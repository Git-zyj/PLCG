#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15280343013844122181ULL;
signed char var_7 = (signed char)22;
short var_8 = (short)31703;
unsigned long long int var_9 = 13950827163140117614ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14285943560350881794ULL;
int var_12 = -1272735337;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
