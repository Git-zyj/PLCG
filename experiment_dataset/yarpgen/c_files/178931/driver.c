#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2117164923622059907ULL;
int var_13 = 1723045524;
short var_17 = (short)-14717;
int zero = 0;
short var_18 = (short)-17115;
_Bool var_19 = (_Bool)1;
int var_20 = 2043547484;
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
