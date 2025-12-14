#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9063899817645216637LL;
unsigned short var_2 = (unsigned short)13998;
long long int var_13 = -3431413754508666087LL;
int zero = 0;
long long int var_14 = 3201530226968576316LL;
unsigned int var_15 = 3841848776U;
void init() {
}

void checksum() {
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
