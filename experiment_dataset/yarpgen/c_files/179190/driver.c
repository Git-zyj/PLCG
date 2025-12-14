#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
_Bool var_1 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)46;
short var_10 = (short)-8193;
signed char var_13 = (signed char)-70;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 963583784U;
void init() {
}

void checksum() {
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
