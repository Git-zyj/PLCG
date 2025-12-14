#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16704;
signed char var_1 = (signed char)107;
int var_7 = 37941705;
signed char var_10 = (signed char)-9;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -8116121584591348724LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
