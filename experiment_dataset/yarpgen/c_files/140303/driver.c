#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2490049406480707090LL;
unsigned int var_9 = 3076543404U;
int var_10 = -1778557216;
int zero = 0;
unsigned int var_11 = 805867523U;
long long int var_12 = 7016501559885141580LL;
long long int var_13 = -1988201814567863703LL;
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
