#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2642560402677147962LL;
long long int var_3 = -8844323809760688816LL;
signed char var_5 = (signed char)20;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
int var_12 = 993354180;
long long int var_13 = -5775633849944478264LL;
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
