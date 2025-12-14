#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-19;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-26005;
unsigned short var_9 = (unsigned short)29792;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-4801;
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
