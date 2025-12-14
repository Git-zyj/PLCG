#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-125;
short var_9 = (short)-31970;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 3775397700694155260ULL;
signed char var_14 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
