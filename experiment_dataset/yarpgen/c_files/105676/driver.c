#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1286159912740983806LL;
unsigned int var_8 = 40420160U;
unsigned char var_9 = (unsigned char)213;
int zero = 0;
long long int var_13 = -4811416211738605319LL;
unsigned int var_14 = 3094716971U;
unsigned char var_15 = (unsigned char)36;
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
