#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -519793449;
unsigned int var_1 = 2761791097U;
int var_4 = 2030050116;
int var_6 = -396275447;
int var_8 = 1590953715;
int var_9 = -339787243;
int zero = 0;
unsigned int var_10 = 3972414259U;
int var_11 = -1407239084;
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
