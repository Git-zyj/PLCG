#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9213151363415452623LL;
long long int var_5 = -638551488481680939LL;
long long int var_8 = 5536886788551858797LL;
long long int var_9 = -5041067623936006251LL;
int zero = 0;
unsigned short var_13 = (unsigned short)33822;
unsigned short var_14 = (unsigned short)20679;
unsigned short var_15 = (unsigned short)5160;
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
