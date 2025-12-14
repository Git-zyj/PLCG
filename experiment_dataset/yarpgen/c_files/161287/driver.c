#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)106;
_Bool var_6 = (_Bool)0;
int var_10 = -1237348991;
int zero = 0;
short var_11 = (short)-29765;
unsigned short var_12 = (unsigned short)40888;
short var_13 = (short)21876;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
