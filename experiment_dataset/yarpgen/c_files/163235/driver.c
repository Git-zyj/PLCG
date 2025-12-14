#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 256639511;
short var_3 = (short)-26171;
signed char var_5 = (signed char)104;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-109;
short var_11 = (short)-24308;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
