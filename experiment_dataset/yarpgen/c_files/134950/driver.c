#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2963410154U;
short var_3 = (short)-6133;
signed char var_4 = (signed char)104;
_Bool var_5 = (_Bool)1;
int var_8 = -1310594010;
unsigned int var_9 = 2270348516U;
unsigned short var_10 = (unsigned short)47227;
int zero = 0;
unsigned int var_12 = 3305957790U;
unsigned int var_13 = 1098324282U;
unsigned short var_14 = (unsigned short)4122;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
