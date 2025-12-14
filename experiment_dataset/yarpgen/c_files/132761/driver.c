#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6576700280415447305LL;
unsigned long long int var_1 = 3370630644648225373ULL;
_Bool var_6 = (_Bool)0;
int var_9 = 1132558910;
int var_10 = 990758023;
int var_11 = -866193782;
int zero = 0;
int var_13 = -122175836;
unsigned int var_14 = 1875195887U;
short var_15 = (short)14685;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
