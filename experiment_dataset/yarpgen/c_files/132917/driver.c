#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
signed char var_1 = (signed char)-63;
unsigned short var_2 = (unsigned short)13124;
unsigned long long int var_9 = 12473884506504439942ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
